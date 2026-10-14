// sub_080A1028 at 0x080A1028 (thumb)

undefined4 sub_080A1028(undefined4 param_1,int *param_2,byte param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1105;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 2;
    iVar2 = *param_2 + ((uint)param_3 * -0xc + 6) * -0x100;
    *(int *)(iVar1 + 0x54) = iVar2;
    *(int *)(iVar1 + 100) = iVar2;
    iVar2 = param_2[1];
    *(int *)(iVar1 + 0x58) = iVar2 + -0x1400;
    *(int *)(iVar1 + 0x68) = iVar2 + -0x1400;
    *(char *)(iVar1 + 0xb4) = param_4;
    *(byte *)(iVar1 + 0xb5) = param_3;
    uVar3 = (uint)(byte)(param_4 + 0x40);
    if (param_3 != 0) {
      uVar3 = 0x80 - uVar3 & 0xff;
    }
    *(int *)(iVar1 + 0x5c) = (int)(short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff];
    *(int *)(iVar1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar3];
    *(undefined4 *)(iVar1 + 0xb8) = 0x800;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      sub_080A0FB4(iVar1,uVar3 & 0xff);
    } while ((int)uVar3 < 4);
  }
  return in_lr;
}

