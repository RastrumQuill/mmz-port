// sub_080236A0 at 0x080236A0 (thumb)

undefined4 sub_080236A0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  *(undefined *)(param_1 + 0x11f) = 0;
  uVar1 = 0;
  if (*(byte *)(param_1 + 0x19b) < 100) {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x120) = uVar1;
  sub_08018BE8(param_1,0x1c);
  return in_lr;
}

