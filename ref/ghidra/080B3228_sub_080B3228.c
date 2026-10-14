// sub_080B3228 at 0x080B3228 (thumb)

undefined8 sub_080B3228(undefined param_1,undefined4 *param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_020231fc);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x80b32b5;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02023200;
    *(undefined *)(iVar2 + 0x1e) = DAT_02023208;
    param_2[1] = param_2[1] + -0x400;
    cVar1 = sub_080079CC(*param_2);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x4c) = *param_2;
      *(undefined4 *)(iVar2 + 0x50) = param_2[1];
    }
    else {
      iVar3 = sub_08008360(*param_2,param_2[1]);
      *(int *)(iVar2 + 0x50) = iVar3;
      if ((int)param_2[1] < iVar3) {
        uVar4 = sub_0800869C(*param_2);
        *(undefined4 *)(iVar2 + 0x50) = uVar4;
      }
      *(undefined4 *)(iVar2 + 0x4c) = *param_2;
    }
    *(undefined *)(iVar2 + 0x10) = param_1;
    *(undefined *)(iVar2 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}

