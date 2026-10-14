// sub_080EE394 at 0x080EE394 (thumb)

undefined4 sub_080EE394(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_2c [2];
  int local_24;
  
  cVar1 = DAT_0202f5d0;
  local_24 = 0;
  if (((*(short *)(param_1 + 0x7b7) != 0) || (DAT_0202f600 != 0)) || (DAT_0202f5c4 != '\0')) {
    local_24 = 1;
  }
  param_1[0x7b6] = param_1[0x7b6] + 1;
  sub_0800507C(param_1 + 0x268);
  DAT_0202f5d4 = 0;
  local_2c[0] = 0;
  sub_080FE110(local_2c,&DAT_0202f5e0,0x1000008);
  if ((((DAT_02030108 & 8) != 0) && (local_24 == 0)) && (cVar1 == '\0')) {
    if (DAT_0202f5bc == 0) {
      sub_0800465C();
      DAT_02030108 = DAT_02030108 & 0xf7;
      iVar3 = sub_080047C0(0x26);
      if (iVar3 != 0) {
        sub_08004768(0x26);
      }
    }
    else {
      if ((DAT_0202f5bc & 0x8000) == 0) {
        if (DAT_0202f5bc < 0xb4) {
          iVar3 = sub_080047C0(0x25);
          if (iVar3 != 0) {
            sub_08004768(0x25);
          }
          iVar3 = sub_080047C0(0x26);
          if (iVar3 == 0) {
            sub_0800471C(0x26);
          }
        }
      }
      else {
        sub_08004628();
        sub_0800471C(0x25);
        DAT_0202f5bc = DAT_0202f5bc & 0x7fff;
      }
      DAT_0202f5bc = DAT_0202f5bc - 1;
    }
  }
  uVar2 = 0;
  if ((local_24 != 0) || (cVar1 != '\0')) {
    uVar2 = 1;
  }
  iVar3 = sub_0801A200(uVar2);
  if (iVar3 == 0) {
    if (local_24 == 0) {
      if ((DAT_020301a8 & 1) != 0) {
        if (((DAT_020301b2 & 1) == 0) && ((DAT_020301a8 & 4) == 0)) {
          if (DAT_02030168 < 359999) {
            DAT_02030168 = DAT_02030168 + 1;
          }
          if (*(uint *)(DAT_02030160 + 0xc) < 21599999) {
            *(uint *)(DAT_02030160 + 0xc) = *(uint *)(DAT_02030160 + 0xc) + 1;
          }
        }
      }
      sub_080252A4();
      if (cVar1 == '\0') {
        sub_08016FE4(DAT_02030630);
        sub_08016FE4(DAT_020305e4);
        sub_08016FE4(DAT_020305e8);
        sub_08016FB4(DAT_020305dc);
        sub_0809C34C();
        sub_08016FB4(DAT_020305e0);
        sub_08016FB4(DAT_02030634);
      }
      sub_08016FE4(DAT_02030638);
      sub_080B2414();
      sub_08007218();
      if (cVar1 == '\0') {
        sub_08017024(DAT_02030630);
        sub_08017024(DAT_020305e4);
        sub_08017024(DAT_020305e8);
        sub_08017024(DAT_020305dc);
        sub_08017024(DAT_020305f8);
        sub_08017024(DAT_020305e0);
        sub_08017024(DAT_02030634);
        sub_08017024(DAT_02030638);
      }
    }
    else {
      sub_08007218();
    }
    sub_080F004C(param_1);
    sub_0800725C();
    sub_0801708C(DAT_02030630);
    sub_0801708C(DAT_020305e4);
    sub_0801708C(DAT_020305e8);
    sub_0801708C(DAT_020305dc);
    sub_0801708C(DAT_02030634);
    piVar4 = param_1 + 0x268;
    sub_08017224(DAT_02030630,piVar4);
    sub_08017224(DAT_020305e4,piVar4);
    sub_08017224(DAT_020305e8,piVar4);
    sub_08017224(DAT_020305dc,piVar4);
    sub_0801713C(DAT_02030638,piVar4);
    sub_08036F08(piVar4);
    sub_0801713C(DAT_020305f8,piVar4);
    sub_0801713C(DAT_0203062c,piVar4);
    sub_08017224(DAT_02030634,piVar4);
    sub_080F013C(param_1);
    sub_080EA16C();
    sub_080F0198(param_1);
    if (((DAT_02002134 & 8) != 0) && (*param_1 == 0x400)) {
      if ((((*(uint *)(param_1[0x192b] + 0x8c) & 0x200) == 0) &&
          (*(short *)(param_1[0x192b] + 0xa4) != 0)) &&
         ((DAT_02030c1a == 0 || (DAT_02030c1c == '\0')))) {
        if (((DAT_020301a8 & 0x40) == 0) &&
           ((((((DAT_020301a8 & 1) != 0 && ((DAT_020301b2 & 1) == 0)) && (DAT_020302f4 == 0)) &&
             ((DAT_02030ea2 == '\0' && (cVar1 == '\0')))) &&
            ((DAT_02002420 == 0 && (DAT_0202f600 == 0)))))) {
          *(undefined2 *)(param_1 + 0x7b7) = 1;
          sub_080EDB10(param_1,0x500);
        }
      }
    }
    uVar2 = 0;
    if ((local_24 != 0) || (cVar1 != '\0')) {
      uVar2 = 1;
    }
    sub_0801A380(uVar2);
    if ((local_24 == 0) && (cVar1 == '\0')) {
      if ((DAT_0202f5b0 != '\0') && ((DAT_030032e1 & 2) == 0)) {
        sub_0800471C(0x29);
      }
      DAT_0202f5b0 = '\0';
    }
    DAT_0202f5c4 = DAT_030032e2;
  }
  else {
    DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x100;
    sub_080EDB10(param_1,0x800);
  }
  return in_lr;
}

