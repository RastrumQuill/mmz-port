// sub_08015704 at 0x08015704 (thumb)

longlong sub_08015704(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  short *psVar9;
  int *piVar10;
  uint in_lr;
  int local_24;
  undefined4 local_20;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x30);
  pcVar7 = (char *)(param_1 + 0x17c);
  if (*pcVar7 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 10) = 0;
    if ((DAT_02000cd6 & 0x1f) != 0x1f) goto LAB_08015e66;
    if (DAT_0202ec32 == 0) {
      cVar2 = '\x05';
    }
    else {
      if (DAT_0202ec32 == 1) {
        *pcVar7 = '\x01';
        goto LAB_0801575c;
      }
      cVar2 = '\x03';
    }
    *pcVar7 = cVar2;
  }
LAB_0801575c:
  if (*(char *)(param_1 + 0x17c) == '\x01') {
    if (DAT_02000ca4 == '\0') {
      sub_0801B454(&DAT_0202ec40,&DAT_08326768);
    }
    else {
      sub_0801B454(&DAT_0202ec40,&DAT_083267f8);
    }
    *(undefined4 *)(param_1 + 0x184) = 0x1518;
    *(undefined *)(param_1 + 0x17c) = 2;
    goto LAB_08015e66;
  }
  if (*(char *)(param_1 + 0x17c) == '\x02') {
    iVar4 = *(int *)(param_1 + 0x184) + -1;
    *(int *)(param_1 + 0x184) = iVar4;
    if (iVar4 != 0) {
      DAT_0202ec38 = DAT_0202ec38 | 1;
      goto LAB_0801580e;
    }
    DAT_030032e0 = DAT_030032e0 | 0x80;
    puVar6 = &DAT_08326888;
LAB_080157e2:
    sub_0801B454(&DAT_0202ec40,puVar6);
    DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
  }
  else {
LAB_0801580e:
    if (*(char *)(param_1 + 0x17c) == '\x03') {
      if (DAT_02000ca4 == '\0') {
        sub_0801B454(&DAT_0202ec40,&DAT_083268b8);
      }
      else {
        sub_0801B454(&DAT_0202ec40,&DAT_08326950);
      }
      *(undefined4 *)(param_1 + 0x184) = 0x1518;
      *(undefined *)(param_1 + 0x17c) = 4;
      goto LAB_08015e66;
    }
    if (*(char *)(param_1 + 0x17c) == '\x04') {
      if ((*(uint *)(param_1 + 0x184) & 0x3f) == 0) {
        iVar4 = iVar3;
        iVar8 = iVar5;
        if (DAT_02000ca4 == '\0') {
          iVar4 = iVar5;
          iVar8 = iVar3;
        }
        if ((*(uint *)(param_1 + 0x184) & 0x40) == 0) {
          if ((*(uint *)(param_1 + 0x184) & 0x80) == 0) {
            local_24 = *(int *)(iVar4 + 0x54);
            iVar4 = 0x58000;
            goto LAB_080158ca;
          }
          local_24 = *(int *)(iVar8 + 0x54) + 0x3e000;
        }
        else {
          local_24 = *(int *)(iVar8 + 0x54);
          iVar4 = *(int *)(iVar4 + 0x54);
LAB_080158ca:
          local_24 = local_24 + iVar4;
        }
        local_24 = local_24 / 2;
        local_20 = 0x13000;
        sub_080D4938(6,&local_24,0);
      }
      iVar4 = *(int *)(param_1 + 0x184) + -1;
      *(int *)(param_1 + 0x184) = iVar4;
      if (iVar4 == 0) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        puVar6 = &DAT_083269e8;
        goto LAB_080157e2;
      }
      DAT_0202ec38 = DAT_0202ec38 | 1;
    }
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      if (DAT_02000ca4 == '\0') {
        sub_0801B454(&DAT_0202ec40,&DAT_08326a18);
      }
      else {
        sub_0801B454(&DAT_0202ec40,&DAT_08326ab8);
      }
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined *)(param_1 + 0x17c) = 6;
      goto LAB_08015e66;
    }
    if (*(char *)(param_1 + 0x17c) == '\x06') {
      iVar4 = *(int *)(param_1 + 0x184);
      if ((iVar4 < 5999) && ((*(ushort *)(param_1 + 10) & 4) == 0)) {
        *(int *)(param_1 + 0x184) = iVar4 + 1;
      }
      DAT_0202ec38 = DAT_0202ec38 | 1;
      if ((*(int *)(iVar3 + 0x54) - 0x3a400U < 0x1801) && (0x44eff < *(int *)(iVar3 + 0x58))) {
        sub_08022F80(iVar3);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 4;
      }
      if ((*(int *)(iVar5 + 0x54) - 0x3a400U < 0x1801) && (0x44eff < *(int *)(iVar5 + 0x58))) {
        sub_08022F80(iVar5);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 8;
      }
      if ((*(ushort *)(param_1 + 10) & 0xc) == 0xc) {
        DAT_0202f8f2 = (undefined2)*(undefined4 *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0x184) = 0;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        if (DAT_02000ca4 == '\0') {
          sub_0801B454(&DAT_0202ec40,&DAT_08326b58);
        }
        else {
          sub_0801B454(&DAT_0202ec40,&DAT_08326c40);
        }
        DAT_0202ec32 = 3;
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) ^ 0xc;
        *(undefined *)(param_1 + 0x17c) = 7;
        goto LAB_08015e66;
      }
    }
    pcVar7 = (char *)(param_1 + 0x17c);
    if (*pcVar7 == '\a') {
      sub_08022F68(iVar3);
      sub_08022F68(iVar5);
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      *pcVar7 = '\b';
    }
    if (*pcVar7 == '\b') {
      iVar4 = *(int *)(param_1 + 0x184);
      if ((iVar4 < 5999) && ((*(ushort *)(param_1 + 10) & 4) == 0)) {
        *(int *)(param_1 + 0x184) = iVar4 + 1;
      }
      DAT_0202ec38 = DAT_0202ec38 | 1;
      if ((*(int *)(iVar3 + 0x54) - 0xc2400U < 0x1801) && (0x26eff < *(int *)(iVar3 + 0x58))) {
        sub_08022F80(iVar3);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 4;
      }
      if ((*(int *)(iVar5 + 0x54) - 0xc2400U < 0x1801) && (0x26eff < *(int *)(iVar5 + 0x58))) {
        sub_08022F80(iVar5);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 8;
      }
      if ((*(ushort *)(param_1 + 10) & 0xc) == 0xc) {
        DAT_0202f8f4 = (undefined2)*(undefined4 *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0x184) = 0;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        if (DAT_02000ca4 == '\0') {
          sub_0801B454(&DAT_0202ec40,&DAT_08326d28);
        }
        else {
          sub_0801B454(&DAT_0202ec40,&DAT_08326df8);
        }
        DAT_0202ec32 = 4;
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) ^ 0xc;
        *(undefined *)(param_1 + 0x17c) = 9;
        goto LAB_08015e66;
      }
    }
    pcVar7 = (char *)(param_1 + 0x17c);
    if (*pcVar7 == '\t') {
      sub_08022F68(iVar3);
      sub_08022F68(iVar5);
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      sub_080CD374(&DAT_0832628c,2,0x40);
      sub_080CD374(&DAT_08326294,3,0x40);
      sub_080CD374(&DAT_0832629c,2,0x40);
      sub_080CD374(&DAT_083262a4,3,0x40);
      *pcVar7 = '\n';
    }
    if (*pcVar7 == '\n') {
      iVar4 = *(int *)(param_1 + 0x184);
      if ((iVar4 < 5999) && ((*(ushort *)(param_1 + 10) & 4) == 0)) {
        *(int *)(param_1 + 0x184) = iVar4 + 1;
      }
      DAT_0202ec38 = DAT_0202ec38 | 1;
      if (((*(int *)(iVar3 + 0x54) - 0x77400U < 0x1801) && (*(int *)(iVar3 + 0x58) < 0x23001)) &&
         (0x21eff < *(int *)(iVar3 + 0x58))) {
        sub_08022F80(iVar3);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 4;
      }
      if (((*(int *)(iVar5 + 0x54) - 0x77400U < 0x1801) && (*(int *)(iVar5 + 0x58) < 0x23001)) &&
         (0x21eff < *(int *)(iVar5 + 0x58))) {
        sub_08022F80(iVar5);
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 8;
      }
      if ((*(ushort *)(param_1 + 10) & 0xc) == 0xc) {
        DAT_0202f8f6 = (undefined2)*(undefined4 *)(param_1 + 0x184);
        DAT_030032e0 = DAT_030032e0 | 0x80;
        puVar6 = &DAT_08326ec8;
        goto LAB_080157e2;
      }
    }
    if (iVar3 == 0) {
      sVar1 = *(short *)(param_1 + 0x17e);
      if (sVar1 == 0) {
        if (DAT_02000ca4 == '\0') {
          sub_0801B51C(0,*(undefined4 *)(&DAT_08326264 + (uint)DAT_0202ec32 * 4));
        }
        else {
          sub_0801B51C(0,*(undefined4 *)(&DAT_08326278 + (uint)DAT_0202ec32 * 4));
        }
      }
      else {
        *(short *)(param_1 + 0x17e) = sVar1 + -1;
      }
      sub_08014FBC(&DAT_0202ed18,3);
      DAT_0202ed31 = 4;
      DAT_0202ed3a = 0;
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xfffe;
    }
    else if (((*(ushort *)(param_1 + 10) & 1) == 0) && (cVar2 = sub_08022AD4(iVar3), cVar2 == '\0'))
    {
      *(undefined2 *)(param_1 + 0x17e) = 0x1e;
    }
    else {
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
      psVar9 = (short *)(param_1 + 0x17e);
      if (*psVar9 == 0) {
        sub_0801B64C(0);
        *psVar9 = 0x1e;
      }
      else {
        *psVar9 = *psVar9 + -1;
      }
    }
    if (iVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x180);
      if (iVar3 == 0) {
        if (DAT_02000ca4 == '\0') {
          sub_0801B51C(1,*(undefined4 *)(&DAT_08326278 + (uint)DAT_0202ec32 * 4));
        }
        else {
          sub_0801B51C(1,*(undefined4 *)(&DAT_08326264 + (uint)DAT_0202ec32 * 4));
        }
      }
      else {
        *(int *)(param_1 + 0x180) = iVar3 + -1;
      }
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xfffd;
    }
    else if (((*(ushort *)(param_1 + 10) & 2) == 0) && (cVar2 = sub_08022AD4(iVar5), cVar2 == '\0'))
    {
      *(undefined4 *)(param_1 + 0x180) = 0x1e;
    }
    else {
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 2;
      piVar10 = (int *)(param_1 + 0x180);
      if (*piVar10 == 0) {
        sub_0801B64C(1);
        *piVar10 = 0x1e;
      }
      else {
        *piVar10 = *piVar10 + -1;
      }
    }
  }
LAB_08015e66:
  return (ulonglong)in_lr << 0x20;
}

