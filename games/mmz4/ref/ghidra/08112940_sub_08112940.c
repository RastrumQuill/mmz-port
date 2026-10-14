// sub_08112940 at 0x08112940 (thumb)

undefined4 sub_08112940(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_2c [2];
  int local_24;
  
  cVar1 = DAT_0202dc00;
  local_24 = 0;
  if (((*(short *)(param_1 + 0x7b7) != 0) || (DAT_0202dc30 != 0)) || (DAT_0202dbf4 != '\0')) {
    local_24 = 1;
  }
  param_1[0x7b6] = param_1[0x7b6] + 1;
  sub_08003470(param_1 + 0x268);
  DAT_0202dc04 = 0;
  local_2c[0] = 0;
  sub_081284E4(local_2c,&DAT_0202dc10,0x1000008);
  if ((((DAT_0202e8b8 & 0x80) != 0) && (local_24 == 0)) && (cVar1 == '\0')) {
    if (DAT_0202dbec == 0) {
      sub_08002A50();
      DAT_0202e8b8 = DAT_0202e8b8 & 0x7f;
      iVar3 = sub_08002BB4(0x26);
      if (iVar3 != 0) {
        sub_08002B5C(0x26);
      }
    }
    else {
      if ((DAT_0202dbec & 0x8000) == 0) {
        if (DAT_0202dbec < 0xb4) {
          iVar3 = sub_08002BB4(0x25);
          if (iVar3 != 0) {
            sub_08002B5C(0x25);
          }
          iVar3 = sub_08002BB4(0x26);
          if (iVar3 == 0) {
            sub_08002B10(0x26);
          }
        }
      }
      else {
        sub_08002A1C();
        sub_08002B10(0x25);
        DAT_0202dbec = DAT_0202dbec & 0x7fff;
      }
      DAT_0202dbec = DAT_0202dbec - 1;
    }
  }
  uVar2 = 0;
  if ((local_24 != 0) || (cVar1 != '\0')) {
    uVar2 = 1;
  }
  iVar3 = sub_0801F2E0(uVar2);
  if (iVar3 == 0) {
    if (local_24 == 0) {
      if ((DAT_0202e918 & 1) != 0) {
        if (((DAT_0202e922 & 1) == 0) && ((DAT_0202e918 & 4) == 0)) {
          if (DAT_0202e8e8 < 359999) {
            DAT_0202e8e8 = DAT_0202e8e8 + 1;
          }
          if (*(uint *)(DAT_0202e8e0 + 8) < 21599999) {
            *(uint *)(DAT_0202e8e0 + 8) = *(uint *)(DAT_0202e8e0 + 8) + 1;
          }
        }
      }
      sub_0802AD60();
      if (cVar1 == '\0') {
        sub_0801C7CC(DAT_0202eda0);
        sub_0801C7CC(DAT_0202ed8c);
        sub_0801C7CC(DAT_0202ed90);
        sub_0801C79C(DAT_0202ed84);
        sub_080BCF88();
        sub_0801C79C(DAT_0202ed88);
        sub_0801C79C(DAT_0202eda4);
      }
      sub_0801C7CC(DAT_0202edb0);
      sub_080D07EC();
      sub_0800560C();
      if (cVar1 == '\0') {
        sub_0801C80C(DAT_0202eda0);
        sub_0801C80C(DAT_0202ed8c);
        sub_0801C80C(DAT_0202ed90);
        sub_0801C80C(DAT_0202ed84);
        sub_0801C80C(DAT_0202ed94);
        sub_0801C80C(DAT_0202ed88);
        sub_0801C80C(DAT_0202eda4);
        sub_0801C80C(DAT_0202edb0);
      }
    }
    else {
      sub_0800560C();
    }
    sub_081144EC(param_1);
    sub_08005650();
    sub_0801C874(DAT_0202eda0);
    sub_0801C874(DAT_0202ed8c);
    sub_0801C874(DAT_0202ed90);
    sub_0801C874(DAT_0202ed84);
    sub_0801C874(DAT_0202eda4);
    piVar4 = param_1 + 0x268;
    sub_0801CA0C(DAT_0202eda0,piVar4);
    sub_0801CA0C(DAT_0202ed8c,piVar4);
    sub_0801CA0C(DAT_0202ed90,piVar4);
    sub_0801CA0C(DAT_0202ed84,piVar4);
    sub_0801C924(DAT_0202edb0,piVar4);
    sub_0803A7E8(piVar4);
    sub_0801C924(DAT_0202ed94,piVar4);
    sub_0801C924(DAT_0202ed9c,piVar4);
    sub_0801CA0C(DAT_0202eda4,piVar4);
    sub_081145DC(param_1);
    sub_0810DE84();
    sub_08114638(param_1);
    if (((DAT_02000764 & 8) != 0) && (*param_1 == 0x400)) {
      if ((((*(uint *)(param_1[0x18ea] + 0x8c) & 0x200) == 0) &&
          (*(short *)(param_1[0x18ea] + 0xa4) != 0)) &&
         ((DAT_0202f38a == 0 || (DAT_0202f38c == '\0')))) {
        if (((DAT_0202e918 & 0x40) == 0) &&
           ((((((DAT_0202e918 & 1) != 0 && ((DAT_0202e922 & 1) == 0)) && (DAT_0202ea64 == 0)) &&
             ((DAT_0202f612 == '\0' && (cVar1 == '\0')))) &&
            ((DAT_02000a60 == 0 && (DAT_0202dc30 == 0)))))) {
          *(undefined2 *)(param_1 + 0x7b7) = 1;
          sub_08112080(param_1,0x500);
        }
      }
    }
    uVar2 = 0;
    if ((local_24 != 0) || (cVar1 != '\0')) {
      uVar2 = 1;
    }
    sub_0801F460(uVar2);
    if ((local_24 == 0) && (cVar1 == '\0')) {
      if ((DAT_0202dbe0 != '\0') && ((DAT_030032e1 & 2) == 0)) {
        sub_08002B10(0x29);
      }
      DAT_0202dbe0 = '\0';
    }
    DAT_0202dbf4 = DAT_030032e2;
  }
  else {
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x100;
    sub_08112080(param_1,0x800);
  }
  return in_lr;
}

