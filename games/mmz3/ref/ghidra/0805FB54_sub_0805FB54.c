// sub_0805FB54 at 0x0805FB54 (thumb)

undefined4 sub_0805FB54(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  uVar1 = (undefined)iVar3;
  *(undefined *)(param_1 + 0x12) = uVar1;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xf) = 6;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar4 = uVar2 * 2 >> 0x11 & 3;
    iVar3 = *(int *)(param_1 + 0x54) + (uVar4 - 2) * 0x3000 + 0x1800;
    *(int *)(param_1 + 100) = iVar3;
    *(uint *)(param_1 + 0x5c) = (uint)(0 < iVar3 - *(int *)(param_1 + 0x54)) * 0x200 + -0x100;
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    uVar2 = 0;
    do {
      if (uVar2 != uVar4) {
        sub_08090E5C(param_1,uVar2);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 4);
    sub_08090E5C(param_1,4);
  }
  return in_lr;
}

