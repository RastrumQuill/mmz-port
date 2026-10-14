// sub_08092A30 at 0x08092A30 (thumb)

undefined4 sub_08092A30(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) && (*(byte *)(param_1 + 0xe) < 0x14)) {
    *(undefined *)(param_1 + 0xe) = 0x14;
  }
  if ((*(byte *)(DAT_0203734c + 10) & 1) == 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    if (*(byte *)(param_1 + 0xe) < 0x14) {
      *(undefined *)(param_1 + 0xe) = 0x14;
    }
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xb603);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined4 *)(param_1 + 0x5c) = 0x1200;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff800;
    *(int *)(param_1 + 0x68) = DAT_020302c4 + -0x801;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      sub_0800471C(0x130);
LAB_08092fc6:
      uVar2 = 0x28;
LAB_08092fc8:
      *(undefined *)(param_1 + 0x12) = uVar2;
LAB_08092fca:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),10);
    if (cVar1 == '\0') {
      local_38 = *(int *)(param_1 + 0x54) + 0xe00;
      local_34 = *(int *)(param_1 + 0x58) + 0x700;
      uVar4 = 0;
      do {
        local_30 = 0;
        local_2c = 0xffffd000;
        sub_080C4A2C(param_1,&local_38,&local_30,uVar4 & 0xff);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 6);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0xe;
    goto LAB_08092fc8;
  case 3:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_08092fca;
  case 4:
    sub_08017700(param_1,0xb602);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    if ((*(byte *)(DAT_0203734c + 10) & 1) != 0) {
      iVar3 = sub_080AFB1C(*(undefined4 *)(param_1 + 0x28));
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x2c) = param_1;
      }
      iVar3 = sub_080C94E8(*(undefined4 *)(param_1 + 0x28));
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x2c) = param_1;
      }
      DAT_03002ac0 = 0xffff;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    sub_0800471C(0x135);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    piVar5 = (int *)(param_1 + 0xbc);
    iVar3 = *piVar5 + ((0x2200 - *piVar5) * 0x10 >> 8);
    *piVar5 = iVar3;
    sub_08007390(param_1 + 0x74,&DAT_08366254 + (0x17 - (iVar3 >> 9)) * 0x18);
    DAT_020305f0 = 0x2000 - *piVar5 >> 9;
    if ((*(byte *)(DAT_0203734c + 10) & 1) != 0) {
      DAT_02002416 = (ushort)((uint)((*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) + 0x7800)
                                    - DAT_020302c0) >> 8) & 0xff;
      iVar3 = (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58) + 0x5000) - DAT_020302c4;
      DAT_0200241a = (short)((uint)(iVar3 + 0x2000) >> 8) - (short)DAT_020305f0 & 0xffU |
                     ((short)DAT_020305f0 + (short)((uint)iVar3 >> 8)) * 0x100;
    }
    DAT_020305f4 = (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58) + 0x5000) - DAT_020302c4 >>
                   8;
    DAT_020305ec = (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) + 0x7800) - DAT_020302c0 >>
                   8;
    sub_080177F4(param_1);
    if ((*(byte *)(DAT_0203734c + 10) & 1) != 0) {
      DAT_03002ac0 = 0xffff;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        DAT_02002410 = DAT_02002410 & 0xbfff;
      }
      else {
        DAT_02002410 = DAT_02002410 | 0x4000;
        DAT_0200241d = 1;
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x74) = DAT_020305ec;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x78) = DAT_020305f4;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x7c) = DAT_020305f0;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*piVar5 < 0x2001) {
      return in_lr;
    }
    *piVar5 = 0x2000;
    uVar2 = 0x3c;
    goto LAB_08092fc8;
  case 6:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    iVar3 = *(int *)(param_1 + 0x68) + 0xbb;
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + ((iVar3 - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    piVar5 = (int *)(param_1 + 0xbc);
    iVar3 = *piVar5;
    *piVar5 = iVar3 + -0x66;
    sub_08007390(param_1 + 0x74,&DAT_08366254 + (0x17 - (iVar3 + -0x66 >> 9)) * 0x18);
    DAT_020305f0 = 0x2000 - *piVar5 >> 9;
    local_24 = *(int *)(param_1 + 0x58);
    if ((*(byte *)(DAT_0203734c + 10) & 1) != 0) {
      DAT_02002416 = (ushort)((uint)((*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) + 0x7800)
                                    - DAT_020302c0) >> 8) & 0xff;
      iVar3 = (*(int *)(param_1 + 0x60) + local_24 + 0x5000) - DAT_020302c4;
      DAT_0200241a = (short)((uint)(iVar3 + 0x2000) >> 8) - (short)DAT_020305f0 & 0xffU |
                     ((short)DAT_020305f0 + (short)((uint)iVar3 >> 8)) * 0x100;
    }
    DAT_020305f4 = (*(int *)(param_1 + 0x60) + local_24 + 0x5000) - DAT_020302c4 >> 8;
    DAT_020305ec = (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54) + 0x7800) - DAT_020302c0 >>
                   8;
    local_28 = param_1 + 0x74;
    sub_080177F4(param_1);
    if ((*(byte *)(DAT_0203734c + 10) & 1) != 0) {
      DAT_03002ac0 = 0xffff;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        DAT_02002410 = DAT_02002410 | 0x4000;
        DAT_0200241d = 1;
      }
      else {
        DAT_02002410 = DAT_02002410 & 0xbfff;
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x74) = DAT_020305ec;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x78) = DAT_020305f4;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x7c) = DAT_020305f0;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      DAT_02002410 = DAT_02002410 & 0xbfff;
      sub_08007390(local_28,&DAT_0836626c);
      *(undefined *)(param_1 + 0x12) = 0x1e;
      *(undefined *)(param_1 + 0xe) = 10;
    }
    break;
  case 10:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_08092fc6;
  case 0xb:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (((*(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54)) -
          *(int *)(param_1 + 0x54)) * 0x30 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58)) -
          *(int *)(param_1 + 0x58)) * 0x30 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if (cVar1 == '\x01') {
        *(undefined *)(param_1 + 0xd) = 2;
        *(char *)(param_1 + 0xe) = cVar1 + -1;
      }
    }
    break;
  case 0x14:
    DAT_02002410 = DAT_02002410 & 0xbfff;
    sub_08017700(param_1,0xb602);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (((*(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54)) -
          *(int *)(param_1 + 0x54)) * 0x10 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58)) -
          *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    sub_080177F4(param_1);
  }
  return in_lr;
}

