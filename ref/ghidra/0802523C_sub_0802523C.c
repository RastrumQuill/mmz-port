// sub_0802523C at 0x0802523C (thumb)

undefined4 sub_0802523C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9f50 + (uint)*(byte *)(param_1 + 0xc0) * 4));
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

