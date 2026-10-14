// sub_08071A38 at 0x08071A38 (thumb)

undefined4 sub_08071A38(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar2 = sub_08073D1C(param_1);
  *(undefined *)(param_1 + 0xc3) = uVar2;
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54) == (bool)(bVar1 >> 4 & 1)) {
    *(undefined *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

