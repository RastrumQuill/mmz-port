// sub_080858E4 at 0x080858E4 (thumb)

undefined4 sub_080858E4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x721c);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar2 = DAT_0202e130;
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x20) {
    if (bVar1 < 0x21) {
      if (bVar1 != 0x10) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x30) {
      if (bVar1 != 0x40) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x13;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0xa00;
  uVar4 = uRam00000054;
  uVar5 = uRam00000058;
  if (DAT_0202e130 != 0) {
    uVar4 = sub_0801EFE8(DAT_0202e130,0);
    uVar5 = sub_0801F004(iVar2,0);
  }
  uVar3 = sub_08038EC0(uVar4,uVar5,local_1c,local_18);
  sub_08098414(&local_1c,0x180,uVar3);
  sub_080032EC(0x2c);
  return in_lr;
}

