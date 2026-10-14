// sub_08070E1C at 0x08070E1C (thumb)

undefined4 sub_08070E1C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
  case 3:
  case 5:
    goto switchD_08070e32_caseD_1;
  case 2:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 0xd;
    break;
  case 6:
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08070e32_caseD_8;
  }
  sub_080033F0(param_1 + 0x6c,uVar1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08070e32_caseD_1:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08070e32_caseD_8:
  sub_08070660(param_1,0,0x100);
  return in_lr;
}

