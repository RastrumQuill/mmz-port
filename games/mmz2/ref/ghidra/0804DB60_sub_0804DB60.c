// sub_0804DB60 at 0x0804DB60 (thumb)

undefined4 sub_0804DB60(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0xa10a);
    sub_080032EC(0x6e);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804db7e_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804dce0:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804db7e_caseD_5:
    return in_lr;
  case 1:
    goto switchD_0804db7e_caseD_1;
  case 2:
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_2c = *(int *)(param_1 + 0x58) + -0x1000;
    uVar3 = sub_080B1D74(&local_30,1,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    sub_080032EC(0xf0);
    sub_08002638(&DAT_0843391c,(DAT_0202e6c6 - 0x300) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433928,(DAT_0202e4c6 - 5) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0xf);
    if (cVar1 == '\0') {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if ((bVar2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      if ((*(byte *)(param_1 + 0x12) & 3) != 0) {
        return in_lr;
      }
      local_28 = *(undefined4 *)(param_1 + 0x54);
      local_24 = *(int *)(param_1 + 0x58) + -0x1200;
      sub_080BDAE4(&local_28,1,0);
      sub_080BDAE4(&local_28,1,1);
      sub_080BDAE4(&local_28,1,2);
      sub_080BDAE4(&local_28,1,3);
      return in_lr;
    }
    if (cVar1 == '\x01') {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if ((bVar2 & 1) != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (cVar1 != '\x02') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_0804dce0;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08002638(&DAT_084330d4,(DAT_0202e5f2 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084330e0,(DAT_0202e3f2 - 4) * 0x20 + 0x200);
    sub_08002638(&DAT_084330e8,(DAT_0202e5f4 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084330f4,(DAT_0202e3f4 - 5) * 0x20 + 0x200);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
    sub_080127E4(param_1,0x310c);
    sub_080128D4(param_1);
    sub_08002D68(8,0x280);
    sub_08002EA0(8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2000;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_0804db7e_caseD_5;
  }
}

