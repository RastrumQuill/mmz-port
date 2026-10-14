// sub_080CC4C8 at 0x080CC4C8 (thumb)

undefined4 sub_080CC4C8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x77);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar2 = (uint)(*(byte *)(param_1 + 0x10) >> 2);
    iVar4 = uVar2 * 0x1800 + -0xc000;
    *(int *)(param_1 + 0x68) = iVar4;
    iVar3 = uVar2 * -4 + 0x18;
    uVar1 = FUN_080fe2f8(iVar4,iVar3 * iVar3);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar5 = (uint)(*(byte *)(param_1 + 0x10) >> 2);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0) + -0x200 + (uVar2 * 0x40 >> 0x16);
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if ((int)(uVar5 * -0x1800 + 0x6000) < *(int *)(param_1 + 0xb8) - iVar4) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x6000 + uVar5 * 0x1800;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

