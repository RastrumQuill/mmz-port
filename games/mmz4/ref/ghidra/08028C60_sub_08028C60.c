// sub_08028C60 at 0x08028C60 (thumb)

undefined8 sub_08028C60(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_0810DEE0(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4),
                 *(undefined2 *)(*(int *)(param_1 + 0xc) + 2));
    break;
  case 1:
    if ((DAT_0202e8b4 & 0x40) == 0) {
      iVar3 = *(int *)(param_1 + 0xc);
      if (*(short *)(iVar3 + 2) == 0) {
        sub_0810DED0(*(undefined2 *)(iVar3 + 4));
      }
      else {
        sub_0810DFA8(*(undefined2 *)(iVar3 + 4));
      }
    }
    else {
      sub_0810DEE0(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4),0x50);
    }
    break;
  case 2:
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) {
      if (DAT_0202f38a != 0) {
LAB_08028d04:
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
        uVar2 = 1;
        goto LAB_08028dac;
      }
    }
    else if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) goto LAB_08028d04;
    break;
  case 3:
    *(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) =
         (short)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 4:
    sVar1 = *(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2);
    if (sVar1 != -1) {
      sub_0810DEE0(sVar1,*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
LAB_08028d6c:
      *(undefined2 *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) = 0xffff;
    }
    break;
  case 5:
    if (*(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) != -1) {
      sub_0810DED0();
      goto LAB_08028d6c;
    }
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) = 0xffff;
    break;
  case 7:
    DAT_0202f388 = DAT_0202f388 | 2;
  }
  uVar2 = 0;
LAB_08028dac:
  return CONCAT44(in_lr,uVar2);
}

