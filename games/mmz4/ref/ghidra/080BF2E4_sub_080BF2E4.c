// sub_080BF2E4 at 0x080BF2E4 (thumb)

undefined4 sub_080BF2E4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined2 auStack_24 [4];
  byte abStack_1c [4];
  
  sub_08128B5C(auStack_24,&DAT_081299b8,8);
  sub_08128B5C(abStack_1c,&DAT_081299c0,4);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  sub_0801CE54(param_1,2,0);
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x52) = auStack_24[uVar3];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = (uint)abStack_1c[uVar3];
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = uVar2 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar2 << 5);
  sub_0801CF00(param_1,0x2b00);
  if (uVar3 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08861a40,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080BF1A8(param_1,param_1 + 0x54,1,2);
  }
  else if (uVar3 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08861a70,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080BF1A8(param_1,param_1 + 0x54,1,3);
  }
  sub_080BF44C(param_1);
  return in_lr;
}

