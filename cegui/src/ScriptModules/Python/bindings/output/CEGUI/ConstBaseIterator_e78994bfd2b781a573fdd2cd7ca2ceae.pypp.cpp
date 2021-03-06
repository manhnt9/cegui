// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae.pypp.hpp"

namespace bp = boost::python;

struct ConstBaseIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater__comma__std_scope_pair_less__CEGUI_scope_String_comma__CEGUI_scope_String__greater___greater__wrapper : CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >, bp::wrapper< CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > > {

    ConstBaseIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater__comma__std_scope_pair_less__CEGUI_scope_String_comma__CEGUI_scope_String__greater___greater__wrapper( )
    : CEGUI::ConstBaseIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > >, std::pair<CEGUI::String, CEGUI::String> >( )
      , bp::wrapper< CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > >(){
        // null constructor
    
    }

    virtual ::std::pair< CEGUI::String, CEGUI::String > getCurrentValue(  ) const {
        bp::override func_getCurrentValue = this->get_override( "getCurrentValue" );
        return func_getCurrentValue(  );
    }

};

void register_ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_class(){

    { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >
        typedef bp::class_< ConstBaseIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater__comma__std_scope_pair_less__CEGUI_scope_String_comma__CEGUI_scope_String__greater___greater__wrapper, boost::noncopyable > ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer_t;
        ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer_t ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer = ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer_t( "ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae", bp::no_init );
        bp::scope ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_scope( ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer );
        ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n") );
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::getCurrentValue
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef ::std::pair<CEGUI::String, CEGUI::String> ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "getCurrentValue"
                , bp::pure_virtual( getCurrentValue_function_type(&::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::getCurrentValue) )
                , "*!\n\
            \n\
               Return the value for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::isAtEnd
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef bool ( exported_class_t::*isAtEnd_function_type )(  ) const;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "isAtEnd"
                , isAtEnd_function_type( &::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::isAtEnd )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the end of the iterators range.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::isAtStart
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef bool ( exported_class_t::*isAtStart_function_type )(  ) const;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "isAtStart"
                , isAtStart_function_type( &::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::isAtStart )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the start of the iterators range.\n\
            *\n" );
        
        }
        ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( bp::self != bp::self );
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::operator=
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef ::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > & ( exported_class_t::*assign_function_type )( ::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > const & ) ;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >()
                , "*!\n\
            \n\
               ConstBaseIterator assignment operator\n\
            *\n" );
        
        }
        ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( bp::self == bp::self );
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::toEnd
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef void ( exported_class_t::*toEnd_function_type )(  ) ;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "toEnd"
                , toEnd_function_type( &::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::toEnd )
                , "*!\n\
            \n\
               Set the iterator current position to the end position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::toStart
        
            typedef CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > exported_class_t;
            typedef void ( exported_class_t::*toStart_function_type )(  ) ;
            
            ConstBaseIterator_e78994bfd2b781a573fdd2cd7ca2ceae_exposer.def( 
                "toStart"
                , toStart_function_type( &::CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > >::toStart )
                , "*!\n\
            \n\
               Set the iterator current position to the start position.\n\
            *\n" );
        
        }
    }

}
