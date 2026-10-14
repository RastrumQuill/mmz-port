// sub_08067094 at 0x08067094 (thumb)

undefined4 sub_08067094(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x902);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 5) {
    if (bVar1 < 6) {
      if (bVar1 != 0) goto LAB_08067136;
    }
    else if (bVar1 != 10) {
      if (bVar1 == 0x30) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
        if (*(char *)(param_1 + 0x10) == '\x02') {
          *(undefined *)(param_1 + 0xf) = 7;
        }
      }
      goto LAB_08067136;
    }
  }
  local_10 = *(int *)(param_1 + 0x58) + -0x1200;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_14 = *(int *)(param_1 + 0x54) + -0x1b00;
    iVar2 = sub_08098414(&local_14,0x240,0);
  }
  else {
    local_14 = *(int *)(param_1 + 0x54) + 0x1b00;
    iVar2 = sub_08098414(&local_14,0x240,0x80);
  }
  if (iVar2 != 0) {
    sub_080032EC(0x2c);
  }
LAB_08067136:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

