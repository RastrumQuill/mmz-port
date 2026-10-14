// sub_0801F860 at 0x0801F860 (thumb)

undefined4 sub_0801F860(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 0) {
    bVar1 = sub_08017520(param_1);
  }
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  if (bVar1 < 3) {
    sub_08018BE8(param_1,8);
  }
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) >> 3;
  bVar2 = bVar1 & 1;
  *(byte *)(param_1 + 0x44) = bVar2;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),bVar2,1,1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  sub_08001EAC(6);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_0801F8FC(param_1);
  return in_lr;
}

