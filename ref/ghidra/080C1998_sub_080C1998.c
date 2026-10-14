// sub_080C1998 at 0x080C1998 (thumb)

undefined4 sub_080C1998(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    break;
  case 1:
    goto switchD_080c19b4_caseD_1;
  case 2:
    uVar1 = DAT_0202365a;
    goto LAB_080c1ef6;
  case 3:
    DAT_02023658 = DAT_02023658 | 4;
    *(undefined *)(param_1 + 0x6fe4 + *(int *)(param_1 + 0x6fec)) = 8;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (((DAT_02004caa & 0x80) != 0) && ((int)*(short *)(param_1 + 4) < *(int *)(param_1 + 0x6fec)))
    {
      sub_08001EAC(0x29);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    }
    if (((DAT_02004caa & 0x40) != 0) && (0 < *(short *)(param_1 + 4))) {
      sub_08001EAC(0x29);
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    if ((int)*(short *)(param_1 + 4) < *(short *)(param_1 + 6) + 4) {
      if (*(short *)(param_1 + 4) < *(short *)(param_1 + 6)) {
        *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 4);
      }
    }
    else {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 4) + -3;
    }
    iVar5 = 0;
    if (-1 < *(int *)(param_1 + 0x6fec)) {
      iVar6 = 1;
      do {
        uVar3 = (uint)*(byte *)(param_1 + 0x6fe4 + *(short *)(param_1 + 6) + iVar5);
        if (uVar3 == (int)*(short *)(param_1 + 10)) {
          sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[(byte)(&DAT_082cbf11)[uVar3]],4,iVar6
                      );
        }
        else {
          sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[(byte)(&DAT_082cbf08)[uVar3]],4,iVar6
                      );
        }
        iVar6 = iVar6 + 2;
        iVar5 = iVar5 + 1;
      } while ((iVar5 <= *(int *)(param_1 + 0x6fec)) && (iVar5 < 4));
    }
    sub_080BC0AC(&UNK_082b932a,2,
                 ((int)*(short *)(param_1 + 4) - (int)*(short *)(param_1 + 6)) * 2 + 1);
    uVar1 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar1;
    if ((uVar1 & 0x10) == 0) {
      if (*(short *)(param_1 + 6) != 0) {
        sub_080BC174(&DAT_080d1dcc,0x1c,1);
      }
      if (*(short *)(param_1 + 6) + 3 < *(int *)(param_1 + 0x6fec)) {
        sub_080BC174(&DAT_080d1dd0,0x1c,8);
      }
    }
    uVar1 = DAT_02004ca8 & 2;
    if ((DAT_02004ca8 & 2) == 0) {
      if ((DAT_02004ca8 & 1) == 0) {
        return in_lr;
      }
      if ((ushort)*(byte *)(param_1 + 0x6fe4 + (int)*(short *)(param_1 + 4)) ==
          *(ushort *)(param_1 + 10)) goto LAB_080c1dee;
      sub_08001EAC(0x2a);
      if ((int)*(short *)(param_1 + 4) == *(int *)(param_1 + 0x6fec)) {
        DAT_02023658 = DAT_02023658 & 0xfffb;
        *(ushort *)(param_1 + 4) = uVar1;
        iVar5 = 1;
      }
      else {
        DAT_02023658 = DAT_02023658 | 2;
        iVar5 = *(byte *)(param_1 + 3) + 1;
      }
    }
    else {
      sub_08001EAC(0x28);
      DAT_02023658 = DAT_02023658 & 0xfffb;
      *(undefined2 *)(param_1 + 4) = 0;
      iVar5 = 1;
    }
    goto LAB_080c1fca;
  case 5:
    if ((DAT_0202365a != 0) && (DAT_0202365a != 3)) {
      return in_lr;
    }
    sub_0801D6D0(&DAT_0202b5a0);
    sub_08001EAC(0xca);
    DAT_02022cb0 = 6;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 6:
    if (DAT_02022cb0 != 0) {
      return in_lr;
    }
    if ((*(int *)(param_1 + 0x6e94) != 0) && (*(int *)(param_1 + 0x6e94) != 0xe)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe;
      return in_lr;
    }
    puVar2 = (undefined4 *)
             sub_0800F9BC(*(undefined *)(param_1 + 0x6fe4 + (int)*(short *)(param_1 + 4)));
    DAT_0202b5ec = *puVar2;
    DAT_0202b5f0 = puVar2[1];
    sub_0801D688(&DAT_0202b5a0);
    sub_08028F3C(&DAT_0202b5a0);
    DAT_02022c5d = 8;
    DAT_02022c66 = 0;
    DAT_02022cb0 = 5;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080c19b4_caseD_7:
    if (DAT_02022cb0 != 0) {
      return in_lr;
    }
    uVar1 = (ushort)DAT_02022864;
LAB_080c1ef6:
    if (uVar1 != 0) {
      return in_lr;
    }
    sub_080BF0A4(param_1,0x300);
    return in_lr;
  case 7:
    goto switchD_080c19b4_caseD_7;
  case 8:
    if ((DAT_0202365a != 0) && (DAT_0202365a != 3)) {
      return in_lr;
    }
    sub_080C2174(param_1);
    DAT_02022cb0 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 9:
    if (DAT_02022cb0 != 0) {
      return in_lr;
    }
    sub_080BF0A4(param_1,3);
    return in_lr;
  case 10:
  case 0xe:
    sub_080C222C(param_1);
    DAT_02022cb0 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xb:
  case 0xf:
    iVar5 = DAT_02022cb0;
    if (DAT_02022cb0 != 0) {
      return in_lr;
    }
    goto LAB_080c1fca;
  case 0xc:
    if ((DAT_0202365a != 0) && (DAT_0202365a != 3)) {
      return in_lr;
    }
    sub_080C2174(param_1);
    DAT_02022cb0 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xd:
    if (DAT_02022cb0 == 0) {
      sub_080BF0A4(param_1,2);
    }
  default:
    goto switchD_080c19b4_caseD_10;
  }
  if (DAT_0202365a != 0) {
    return in_lr;
  }
  uVar1 = sub_0800F94C(&DAT_0202b5ec);
  *(ushort *)(param_1 + 10) = uVar1 & 0xff;
  iVar5 = 0;
  if ((0 < *(int *)(param_1 + 0x6fec)) &&
     ((ushort)*(byte *)(param_1 + 0x6fe4) != *(ushort *)(param_1 + 10))) {
    do {
      iVar5 = iVar5 + 1;
      if (*(int *)(param_1 + 0x6fec) <= iVar5) break;
    } while ((ushort)*(byte *)(param_1 + 0x6fe4 + iVar5) != *(ushort *)(param_1 + 10));
  }
  piVar4 = (int *)(param_1 + 0x6fec);
  if (iVar5 == *piVar4) {
    *(char *)(param_1 + 0x6fe4 + iVar5) = (char)*(undefined2 *)(param_1 + 10);
    *piVar4 = *piVar4 + 1;
  }
  if ((DAT_02022b64 & 4) == 0) {
    if (*(uint *)(param_1 + 0x6e94) == 0) {
      sub_080BC7E8(10);
    }
    else if (*(uint *)(param_1 + 0x6e94) < 0xe) {
      sub_080BC7E8(0xc);
    }
    else {
      sub_080BC7E8(0x44);
    }
  }
  else {
    sub_080BC7E8(0xb);
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080c19b4_caseD_1:
  if ((DAT_0202365a != 0) && (DAT_0202365a != 3)) {
    return in_lr;
  }
  if ((DAT_02004caa & 0x80) != 0) {
    sub_08001EAC(0x29);
    *(ushort *)(param_1 + 4) = *(short *)(param_1 + 4) + 1U & 3;
  }
  if ((DAT_02004caa & 0x40) != 0) {
    sub_08001EAC(0x29);
    *(ushort *)(param_1 + 4) = *(short *)(param_1 + 4) + 3U & 3;
  }
  sub_080BC0AC(&UNK_082b932a,1,*(short *)(param_1 + 4) * 2 + 1);
  if ((DAT_02004ca8 & 2) == 0) {
    if ((DAT_02004ca8 & 1) == 0) {
      return in_lr;
    }
    if (*(short *)(param_1 + 4) == 0) {
      if (((DAT_02022b64 & 4) == 0) && (0xd < *(uint *)(param_1 + 0x6e94))) {
LAB_080c1dee:
        sub_08001EAC(0xc1);
        return in_lr;
      }
      sub_08001EAC(0x2a);
      if (*(int *)(param_1 + 0x6e94) == 0) {
        iVar5 = 3;
      }
      else {
        DAT_02023658 = DAT_02023658 | 2;
        if (DAT_02022cc4 != -1) {
          sub_08001E44(DAT_02022cc4);
          DAT_02022cc4 = -1;
        }
        if (DAT_02022cc6 != -1) {
          sub_08001E44(DAT_02022cc6);
          DAT_02022cc6 = -1;
        }
        iVar5 = 5;
      }
    }
    else {
      sub_08001EAC(0x2a);
      DAT_02023658 = DAT_02023658 | 2;
      if (*(short *)(param_1 + 4) == 1) {
        iVar5 = 8;
      }
      else {
        if (*(short *)(param_1 + 4) != 2) goto LAB_080c1b2e;
        iVar5 = 0xc;
      }
    }
LAB_080c1fca:
    *(char *)(param_1 + 3) = (char)iVar5;
  }
  else {
    sub_08001EAC(0x28);
    DAT_02023658 = DAT_02023658 | 2;
LAB_080c1b2e:
    *(undefined *)(param_1 + 3) = 2;
  }
switchD_080c19b4_caseD_10:
  return in_lr;
}

