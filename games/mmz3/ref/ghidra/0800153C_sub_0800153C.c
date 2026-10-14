// sub_0800153C at 0x0800153C (thumb)

ushort sub_0800153C(void)

{
  int iVar1;
  
  iVar1 = 0x38;
  if (DAT_02001740 != '\0') {
    iVar1 = 0x3c;
  }
  return *(ushort *)
          ((int)*(ushort **)(&DAT_02000fd0 + iVar1) + (uint)**(ushort **)(&DAT_02000fd0 + iVar1)) &
         0xff;
}

