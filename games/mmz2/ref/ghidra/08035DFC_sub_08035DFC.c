// sub_08035DFC at 0x08035DFC (thumb)

undefined4 sub_08035DFC(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 != param_3) {
    uVar1 = sub_08035CD8(param_3);
    iVar2 = sub_08035D04(uVar1,param_3);
    if (iVar2 == 1) {
      sub_0801EA38(param_1,param_2,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801E9FC(param_1,param_2);
    }
  }
  return in_lr;
}

