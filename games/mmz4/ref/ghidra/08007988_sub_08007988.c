// sub_08007988 at 0x08007988 (thumb)

undefined4 sub_08007988(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(&DAT_08829090 + (uint)(DAT_0202cac0 >> 4) * 4 + (DAT_02000c80 & 0x7f) * 8);
  sub_08128884(param_2,*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
  iVar2 = 0;
  iVar1 = 2;
  do {
    *(undefined4 *)((int)&DAT_02000afc + iVar2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)&DAT_02000b00 + iVar2) = *(undefined4 *)(param_2 + 0x14);
    if (1 < *(uint *)((int)&DAT_02000ad4 + iVar2)) {
      sub_08128888((int)&DAT_02000ad0 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  sub_08001F1C(&DAT_0202cad4,((ushort)(&DAT_02000a04)[DAT_02000b2c >> 4] & 0x1f00) << 3,0x1000);
  DAT_0202cab2 = 0;
  return in_lr;
}

