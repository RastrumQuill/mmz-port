// sub_08059018 at 0x08059018 (thumb)

undefined4 sub_08059018(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x90);
    sub_08006E08(param_1 + 0x74,&DAT_0833c918);
    sub_080127E4(param_1,0xa738);
    sub_0802311C(iVar3,0,0,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  if (0x1c00 < *(int *)(iVar3 + 0x58) - *(int *)(param_1 + 0x58)) {
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0x58) + 0x1c00;
  }
  iVar3 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54);
  iVar2 = (*(int *)(param_1 + 0xd0) + -0x6000) - *(int *)(param_1 + 0x58);
  uVar1 = sub_080EEF7C(iVar3 * iVar3 + iVar2 * iVar2);
  uVar1 = uVar1 & 0xffff;
  iVar3 = sub_080EF150(iVar3 * 0x100,uVar1);
  iVar2 = sub_080EF150(iVar2 * 0x100,uVar1);
  iVar3 = iVar3 - *(int *)(param_1 + 0x5c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (iVar3 >> 4);
  iVar2 = iVar2 - *(int *)(param_1 + 0x60);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (iVar2 >> 4);
  if (0x300 < uVar1) {
    uVar1 = 0x300;
  }
  if (uVar1 < 0x40) {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x5c) * uVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = *(int *)(param_1 + 0x60) * uVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  sub_080128D4(param_1);
  return in_lr;
}

