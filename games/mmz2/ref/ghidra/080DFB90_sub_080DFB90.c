// sub_080DFB90 at 0x080DFB90 (thumb)

void sub_080DFB90(void)

{
  sub_080011DC();
  DAT_0202f680 = 0;
  do {
    sub_080EF118(&DAT_0202f680,*(undefined4 *)(&DAT_0835e2f0 + (uint)DAT_0202f684 * 4));
    sub_08001098(1);
  } while( true );
}

