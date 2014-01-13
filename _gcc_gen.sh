
export SOLUTION_NAME=head_first_design_patterns

export BUILD_TYPE=Debug
if [ "$1" == 'Release' ];
then
	export BUILD_TYPE=Release
fi

export BUILD_FOLDER=_build_"$BUILD_TYPE"_64

if [ ! -d $BUILD_FOLDER ];
then
	mkdir $BUILD_FOLDER
fi

cd $BUILD_FOLDER
cmake -DBOOST_STATIC=ON -DBOOST_STAGE_FOLDER_WITH_ADDRESS_MODEL=ON -DSOLUTION_NAME=$SOLUTION_NAME -DCMAKE_BUILD_TYPE=$BUILD_TYPE -G "Unix Makefiles" ../ 
cd ../

