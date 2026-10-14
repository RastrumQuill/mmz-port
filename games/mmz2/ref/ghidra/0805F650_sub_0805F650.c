// sub_0805F650 at 0x0805F650 (thumb)

undefined4 sub_0805F650(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa0f);
    sub_080032EC(0x80);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar3 = sub_080B1D74(param_1 + 0x54,3,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    sub_08002638(&DAT_0843391c,(DAT_0202e6c6 - 0x300) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433928,(DAT_0202e4c6 - 5) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0xf0);
    break;
  case 1:
    cVar2 = *(char *)(*(int *)(param_1 + 0x28) + 0xf);
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      if ((*(byte *)(param_1 + 0x12) & 3) != 0) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + '\b';
      *(char *)(param_1 + 0x13) = cVar2;
      cVar2 = -cVar2;
      iVar4 = param_1 + 0x54;
      sub_080BDAE4(iVar4,2,*(undefined *)(param_1 + 0x13));
      sub_080BDAE4(iVar4,2,*(char *)(param_1 + 0x13) + '@');
      sub_080BDAE4(iVar4,2,*(char *)(param_1 + 0x13) + -0x80);
      sub_080BDAE4(iVar4,2,*(char *)(param_1 + 0x13) + -0x40);
      sub_080BDAE4(iVar4,2,cVar2 + -1);
      sub_080BDAE4(iVar4,2,cVar2 + '?');
      sub_080BDAE4(iVar4,2,cVar2 + '\x7f');
      sub_080BDAE4(iVar4,2,cVar2 + -0x41);
      return in_lr;
    }
    if (cVar2 == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 1) != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (cVar2 != '\x02') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08002638(&DAT_08433430,(DAT_0202e648 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_0843343c,(DAT_0202e448 - 5) * 0x20 + 0x200);
    sub_080127E4(param_1,0xab04);
    sub_080128D4(param_1);
    sub_08002D68(0x8c,0x280);
    sub_08002EA0(0x8c);
    break;
  case 2:
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      return in_lr;
    }
    sub_080127E4(param_1,0xab05);
    sub_080128D4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x18;
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    break;
  case 4:
    sub_08002EA0(0x8c);
    cVar2 = sub_08002EA0(0x8c);
    if (cVar2 != '\x03') {
      return in_lr;
    }
    sub_08002EF0(0x8c);
    sub_080127E4(param_1,0xab00);
    sub_080128D4(param_1);
    break;
  case 5:
    bVar1 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
  default:
    goto switchD_0805f686_caseD_6;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0805f686_caseD_6:
  return in_lr;
}

