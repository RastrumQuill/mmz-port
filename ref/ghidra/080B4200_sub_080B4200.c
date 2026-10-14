// sub_080B4200 at 0x080B4200 (thumb)

undefined4
sub_080B4200(int param_1,undefined4 param_2,undefined4 *param_3,undefined *param_4,undefined param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_080190B4(iVar2,param_2,param_5,param_6,param_7);
  *param_3 = 0;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    uVar1 = 0x82;
  }
  else {
    uVar1 = 0xfe;
  }
  *param_4 = uVar1;
  return in_lr;
}

