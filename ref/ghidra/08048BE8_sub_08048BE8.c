// sub_08048BE8 at 0x08048BE8 (thumb)

undefined4 sub_08048BE8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((DAT_02022ae0 & 2) != 0) || ((*(byte *)(param_1 + 0xb) & 0x80) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

