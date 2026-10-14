// sub_0805F838 at 0x0805F838 (thumb)

undefined4 sub_0805F838(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_020302c4 - (*(int *)(param_1 + 0x58) + 0x5000);
  if (iVar1 < -0x3000) {
    *(undefined *)(param_1 + 0xf) = 3;
    sub_08060768(param_1,10);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else if (-0x2000 < iVar1) {
    *(undefined2 *)(param_1 + 0xe) = 5;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0805F8FC(param_1);
  }
  return in_lr;
}

