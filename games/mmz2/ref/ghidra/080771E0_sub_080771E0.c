// sub_080771E0 at 0x080771E0 (thumb)

undefined4 sub_080771E0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = sub_08009684(param_2,param_3);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
  }
  return uVar1;
}

