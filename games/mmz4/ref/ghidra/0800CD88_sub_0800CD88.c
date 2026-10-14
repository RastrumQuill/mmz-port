// sub_0800CD88 at 0x0800CD88 (thumb)

undefined4 sub_0800CD88(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(int *)(param_1 + 0x5c) << 0x10;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = uVar2 >> 0x14;
    (&DAT_02000a04)[uVar2] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x4044;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    DAT_02000a40 = 0x3b44;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0800ce24;
    sub_081284E4(&DAT_08b3a2b0,((ushort)(&DAT_02000a04)[uVar2 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    sub_081284E4(&DAT_08b3aab8,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar2 >> 0x14] & 0x1f00) * 8
                 ,0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800ce24:
  iVar3 = (*(int *)(param_1 + 0x34) + -0x780) * 0x10;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x800 < iVar3) {
    iVar3 = 0x800;
  }
  sVar1 = (short)((uint)iVar3 >> 8);
  if (iVar3 < 0x401) {
    DAT_02000a42 = 8U - sVar1 & 0x1f | 0xc00;
  }
  else {
    DAT_02000a42 = 8U - sVar1 & 0x1f | ((short)(iVar3 >> 9) + 0xc) * 0x100;
  }
  return in_lr;
}

