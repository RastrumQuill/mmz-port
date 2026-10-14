// sub_08085034 at 0x08085034 (thumb)

undefined4 sub_08085034(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x720c);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = DAT_0202e130;
  if (cVar2 == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = -0xe00;
    }
    else {
      local_1c = 0xe00;
    }
    local_1c = *(int *)(param_1 + 0x54) + local_1c;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = uRam00000054;
    uVar4 = uRam00000058;
    if (DAT_0202e130 != 0) {
      uVar3 = sub_0801EFE8(DAT_0202e130,2);
      uVar4 = sub_0801F004(iVar1,2);
    }
    uVar5 = sub_08038EC0(uVar3,uVar4,local_1c,local_18);
    uVar5 = uVar5 & 0xff;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (uVar5 < 0xf0) {
        if (0x80 < uVar5) {
          uVar5 = 0xf0;
        }
      }
      else if ((0x10 < uVar5) && (-1 < (int)(uVar5 * 0x1000000))) {
        uVar5 = 0x10;
      }
    }
    else if (uVar5 < 0x70) {
      if (-1 < (int)(uVar5 * 0x1000000)) {
        uVar5 = 0x70;
      }
    }
    else if (0x90 < uVar5) {
      uVar5 = 0x90;
    }
    sub_08098414(&local_1c,0x180,uVar5);
    sub_080032EC(0x2c);
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

