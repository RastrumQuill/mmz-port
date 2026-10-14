// sub_08021124 at 0x08021124 (thumb)

undefined4 sub_08021124(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08021170();
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xf) = 2;
    uVar1 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      uVar1 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  return in_lr;
}

