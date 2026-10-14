// sub_0801F3D8 at 0x0801F3D8 (thumb)

longlong sub_0801F3D8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint in_lr;
  
  cVar3 = DAT_020301a2;
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar11 = (char *)(param_1 + 0x17c);
  cVar4 = *pcVar11;
  if (cVar4 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar2 = DAT_02030104 & 0xfb;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_08352fa8);
        *(byte *)(DAT_0203df90 + 2) = *(byte *)(DAT_0203df90 + 2) & 0xfd;
        *(byte *)(DAT_0203df90 + 4) = *(byte *)(DAT_0203df90 + 4) & 0xfe;
        *(byte *)(DAT_0203df90 + 3) = *(byte *)(DAT_0203df90 + 3) & 0xf7;
        *(byte *)(DAT_0203df90 + 4) = *(byte *)(DAT_0203df90 + 4) & 0xfd;
      }
      else {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_08353e58);
      }
      sub_0801A4CC(1);
      *(undefined2 *)(param_1 + 0x17e) = 0;
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_0801f846;
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar6 = &DAT_083530c8;
      }
      else if (DAT_020301a2 == '\x03') {
        puVar6 = &DAT_08353180;
      }
      else if (DAT_020301a2 == '\x04') {
        puVar6 = &DAT_083531c8;
      }
      else {
        if (DAT_020301a2 != '\x05') {
          DAT_02030104 = bVar2;
          if (DAT_020301a2 == '\x06') {
            sub_08021D7C(&DAT_020301b0,
                         *(undefined4 *)(&DAT_08353fac + *(int *)(param_1 + 0x180) * 4));
            DAT_02030104 = DAT_02030104 | 4;
            *pcVar11 = '\x06';
          }
          goto LAB_0801f846;
        }
        puVar6 = *(undefined **)(&DAT_08353f7c + *(int *)(param_1 + 0x180) * 4);
      }
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,puVar6);
      *pcVar11 = cVar3;
      goto LAB_0801f846;
    }
    DAT_02030104 = bVar2;
    sub_08021D7C(&DAT_020301b0,&DAT_08353068);
  }
  else if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      DAT_02030330 = DAT_02030330 * 0x343fd + 0x269ec3 & 0x7fffffff;
      if (0x14a000 < *(int *)(iVar9 + 0x54)) {
        if ((DAT_02030104 & 0x20) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_08353120);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_08353ed0);
          DAT_020301a8 = DAT_020301a8 & 0xfffe;
        }
        sub_0801F934(param_1);
        sub_0801A4CC(3);
        *(undefined *)(param_1 + 0x17c) = 3;
      }
    }
    else if (cVar4 == '\x03') {
      sub_0801A4CC(4);
      *pcVar11 = '\x04';
    }
    else if (cVar4 == '\x04') {
      if ((*(int *)(iVar9 + 0x54) - 0x150000U < 0x3000) && (*(int *)(iVar9 + 0x58) < 0x1e000)) {
        if ((DAT_02030c1a == 0) && (DAT_02030ea2 == '\0')) {
          sub_080EA244(0xf02);
        }
      }
      else if ((*(int *)(iVar9 + 0x54) - 0x14a000U < 0xf000) &&
              ((*(int *)(iVar9 + 0x58) < 0x1e000 && (DAT_02030c1a != 0)))) {
        DAT_02030c18 = DAT_02030c18 | 2;
      }
      if ((0x3bfff < *(int *)(iVar9 + 0x58)) && (*(int *)(iVar9 + 0x54) < 0xb4001)) {
        uVar10 = 0;
        do {
          sVar5 = (short)uVar10;
          uVar7 = (uint)sVar5;
          if ((((int)(uint)*(ushort *)(param_1 + 0x17e) >> (uVar7 & 0xff) & 1U) == 0) &&
             (((int)(*(byte *)(DAT_0203df90 + (uint)((byte)(&DAT_08349650)[uVar7] >> 2)) & 0xf) >>
               ((byte)(&DAT_08349650)[uVar7] & 3) & 1U) != 0)) break;
          uVar7 = uVar7 + 1;
          uVar10 = uVar7 & 0xffff;
          sVar5 = (short)uVar7;
        } while ((int)(uVar7 * 0x10000) >> 0x10 < 4);
        uVar1 = *(ushort *)(param_1 + 0x17e);
        if (uVar1 == 0xf) {
          DAT_02030104 = DAT_02030104 | 4;
          sub_08021D7C(&DAT_020301b0,*(undefined4 *)(&DAT_08353f8c + *(int *)(param_1 + 0x180) * 4))
          ;
          sub_0801A4CC(6);
          *(undefined *)(param_1 + 0x17c) = 6;
        }
        else {
          uVar10 = (uint)sVar5;
          if ((int)uVar10 < 4) {
            *(ushort *)(param_1 + 0x17e) = (ushort)(1 << (uVar10 & 0xff)) | uVar1;
            *(uint *)(param_1 + 0x180) = uVar10;
            iVar9 = uVar10 * 2;
            sub_080EA1C8(*(undefined2 *)(&UNK_08349654 + iVar9),0x5a);
            *(undefined2 *)(param_1 + 0x16c) = *(undefined2 *)(&UNK_0834965c + iVar9);
            *(undefined2 *)(param_1 + 0x16e) = *(undefined2 *)(&UNK_08349664 + iVar9);
            sub_08021D7C(&DAT_020301b0,&DAT_08353220);
          }
        }
      }
    }
    else if ((cVar4 == '\x05') &&
            (iVar8 = *(int *)(param_1 + 0x180) * 4,
            *(int *)(&DAT_0834966c + iVar8) <= *(int *)(iVar9 + 0x54))) {
      sub_08021D7C(&DAT_020301b0,*(undefined4 *)(&DAT_08353f9c + iVar8));
      DAT_02030104 = DAT_02030104 | 4;
      sub_0801A4CC(6);
      *pcVar11 = '\x06';
    }
    else {
      cVar4 = *(char *)(param_1 + 0x17c);
      if (cVar4 == '\x06') {
        sub_0801A4CC(5);
        cVar4 = '\a';
      }
      else {
        if ((cVar4 != '\a') || ((DAT_020301a8 & 0x10) == 0)) goto LAB_0801f846;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_08021D7C(&DAT_020301b0,&DAT_08353d98);
        DAT_020301b2 = DAT_020301b2 & 0xfd;
        DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
        cVar4 = '\b';
      }
      *(char *)(param_1 + 0x17c) = cVar4;
    }
    goto LAB_0801f846;
  }
  sub_0801A4CC(2);
  *pcVar11 = '\x02';
LAB_0801f846:
  return (ulonglong)in_lr << 0x20;
}

