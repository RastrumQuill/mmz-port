// sub_08000000 at 0x08000000 (arm)

void sub_08000000(void)

{
  do {
    DAT_03007ffc = IntrMain;
    AgbMain();
  } while( true );
}

