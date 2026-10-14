// sub_080E066C at 0x080E066C (thumb)

undefined4 sub_080E066C(int param_1,undefined4 param_2)

{
  undefined uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  sub_08002EA0(0x52);
  sub_080E0354(param_2);
  if ((DAT_02000d16 & 0x40) == 0) {
    if ((DAT_02000d16 & 0x80) == 0) goto LAB_080e06fa;
    pcVar2 = (char *)(param_1 + 0x234);
    *pcVar2 = *pcVar2 + '\x01';
    sub_080032EC(1);
    if ((*pcVar2 == '\x01') && (*(int *)(param_1 + 0x10) == 0)) {
      *pcVar2 = '\x02';
    }
    if (*(byte *)(param_1 + 0x234) < 3) goto LAB_080e06fa;
    uVar1 = 0;
  }
  else {
    pcVar2 = (char *)(param_1 + 0x234);
    *pcVar2 = *pcVar2 + -1;
    sub_080032EC(1);
    if ((*pcVar2 == '\x01') && (*(int *)(param_1 + 0x10) == 0)) {
      *pcVar2 = '\0';
    }
    if (*(byte *)(param_1 + 0x234) < 3) goto LAB_080e06fa;
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0x234) = uVar1;
LAB_080e06fa:
  sub_080E05EC(param_1);
  *(undefined *)(param_1 + 0x235) = 0;
  if ((DAT_02000d14 & 9) != 0) {
    if (DAT_020317c6 != '\0') {
      if ((DAT_02000d10 & 0x204) == 0x204) {
        *(undefined *)(param_1 + 0x235) = 1;
      }
    }
    sub_080032EC(2);
    sub_08003274(0xc4);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

