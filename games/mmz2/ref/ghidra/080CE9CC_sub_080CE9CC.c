// sub_080CE9CC at 0x080CE9CC (thumb)

undefined4 sub_080CE9CC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
  case 2:
    sub_080CE7CC(param_1,1,2);
    sub_080CE7CC(param_1,1,3);
    sub_080CE7CC(param_1,1,8);
    uVar2 = 9;
    break;
  case 1:
  case 3:
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    goto LAB_080cea62;
  case 4:
    sub_080CE7CC(param_1,1,4);
    sub_080CE7CC(param_1,1,5);
    sub_080CE7CC(param_1,1,10);
    uVar2 = 0xb;
    break;
  case 6:
    sub_080CE7CC(param_1,1,6);
    sub_080CE7CC(param_1,1,7);
    sub_080CE7CC(param_1,1,0);
    sub_080CE7CC(param_1,1,1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CE858(param_1);
  default:
    goto switchD_080ce9de_caseD_7;
  }
  sub_080CE7CC(param_1,1,uVar2);
  *(undefined *)(param_1 + 0x12) = 0x3c;
LAB_080cea62:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080ce9de_caseD_7:
  return in_lr;
}

