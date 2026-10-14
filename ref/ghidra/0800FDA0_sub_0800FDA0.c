// sub_0800FDA0 at 0x0800FDA0 (thumb)

undefined4 sub_0800FDA0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_02002024;
  iVar7 = *(int *)(param_1 + 0x1c);
  if ((DAT_0200520c & 0x7f) == 9) {
    if ((*(int *)(iVar7 + 0x4c) >> 0xc) - 0x268U < 0x3b) {
      if ((*(ushort *)(param_1 + 6) & 1) == 0) {
        iVar3 = *(int *)(iVar7 + 0x50) >> 0xc;
        DAT_02022af2 = 1;
        if ((((0x52 < iVar3) && (DAT_02022af2 = 2, 0x5a < iVar3)) &&
            (DAT_02022af2 = 3, 0x6b < iVar3)) && (DAT_02022af2 = 5, iVar3 < 0x74)) {
          DAT_02022af2 = 4;
        }
        DAT_02002024 = sub_080A0B10(&DAT_0829ff2c,0);
        if (DAT_02002024 != 0) {
          uVar2 = *(ushort *)(param_1 + 6) | 1;
          goto LAB_0800fe6a;
        }
      }
    }
    else if ((*(ushort *)(param_1 + 6) & 1) != 0) {
      *(byte *)(DAT_02002024 + 10) = *(byte *)(DAT_02002024 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
      uVar2 = *(ushort *)(param_1 + 6) ^ 1;
LAB_0800fe6a:
      *(ushort *)(param_1 + 6) = uVar2;
    }
  }
  pcVar6 = (char *)(param_1 + 0x174);
  if (*pcVar6 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if ((DAT_02022ad4 & 0x40) == 0) {
      if ((DAT_02022ad5 & 4) != 0) {
        sub_08014444(&DAT_02022b6c,&DAT_082a0168);
        *pcVar6 = '\x01';
        return in_lr;
      }
      if ((DAT_02022adc & 4) != 0) {
        sub_08014444(&DAT_02022b6c,&DAT_082a0260);
        *pcVar6 = '\x02';
        return in_lr;
      }
      if ((DAT_02022adc & 8) != 0) {
        iVar3 = 0;
        iVar7 = iVar3;
        cVar1 = DAT_0202a6c4;
        if (0 < DAT_0202a6cc) {
          while ((iVar7 = iVar3, cVar1 != '\x04' && (iVar7 = iVar3 + 1, iVar7 < DAT_0202a6cc))) {
            pcVar6 = &DAT_0202a6c5 + iVar3;
            iVar3 = iVar7;
            cVar1 = *pcVar6;
          }
        }
        if (iVar7 == DAT_0202a6cc) {
          (&DAT_0202a6c4)[iVar7] = 4;
          DAT_0202a6cc = DAT_0202a6cc + 1;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a0410);
        DAT_02022af3 = 1;
        *(undefined *)(param_1 + 0x174) = 3;
        return in_lr;
      }
      if ((DAT_02022add & 0x20) == 0) {
        sub_08014444(&DAT_02022b6c,&DAT_082a00a8);
      }
      else {
        sub_08014444(&DAT_02022b6c,&DAT_082a0570);
      }
    }
    else {
      sub_08014444(&DAT_02022b6c,&DAT_082a0108);
    }
    *(undefined *)(param_1 + 0x174) = 4;
  }
  cVar1 = *(char *)(param_1 + 0x174);
  if (cVar1 == '\x01') {
    sub_0800F3BC(&DAT_0202a584);
    sub_0801CB20(&DAT_0202b5a0,&DAT_0202a604);
    DAT_0202a574 = 4;
    uVar4 = 4;
LAB_08010152:
    sub_0800F450(uVar4,&DAT_0202a5d0);
    sub_080BF0A4(&DAT_020236e0,0x200);
    return in_lr;
  }
  if (cVar1 == '\x02') {
    sub_0800F3BC(&DAT_0202a584);
    sub_0801CB20(&DAT_0202b5a0,&DAT_0202a604);
    DAT_0202a574 = 0xd;
    uVar4 = 0xd;
    goto LAB_08010152;
  }
  if ((cVar1 == '\x03') && ((DAT_0200520c & 0x7f) == 6)) {
    sub_0800F3BC(&DAT_0202a584);
    sub_0801CB20(&DAT_0202b5a0,&DAT_0202a604);
    DAT_0202a574 = 0xe;
    uVar4 = 0xe;
    goto LAB_08010152;
  }
  if (*(char *)(param_1 + 0x174) != '\x04') {
    return in_lr;
  }
  if (((DAT_0200520c & 0x7f) == 6) && ((*(uint *)(DAT_02022b20 + 0x10) & 0xc000) == 0x4000)) {
    if ((*(char *)(param_1 + 0x175) == '\0') &&
       ((0x10a < *(int *)(iVar7 + 0x4c) >> 0xc && (*(int *)(iVar7 + 0x50) >> 0xc < 0x19a)))) {
      puVar5 = &DAT_082a05d0;
      goto LAB_080101ca;
    }
    if ((*(char *)(param_1 + 0x175) == '\x01') && (0x10e < *(int *)(iVar7 + 0x4c) >> 0xc))
    goto LAB_080101f8;
    if (*(char *)(param_1 + 0x175) == '\x02') {
      sub_0800F3BC(&DAT_0202a584);
      sub_0801CB20(&DAT_0202b5a0,&DAT_0202a604);
      uVar4 = 0xf;
      DAT_0202a574 = 0xf;
      goto LAB_08010152;
    }
  }
  if ((DAT_0200520c & 0x7f) != 7) {
    return in_lr;
  }
  if ((*(uint *)(DAT_02022b20 + 0x10) & 0x18000) != 0x8000) {
    return in_lr;
  }
  if (((*(char *)(param_1 + 0x175) != '\0') || (*(int *)(iVar7 + 0x4c) >> 0xc < 0x183)) ||
     (0xbd < *(int *)(iVar7 + 0x50) >> 0xc)) {
    if ((*(char *)(param_1 + 0x175) != '\x01') || (*(int *)(iVar7 + 0x4c) >> 0xc < 0x187)) {
      if (*(char *)(param_1 + 0x175) != '\x02') {
        return in_lr;
      }
      sub_0800F3BC(&DAT_0202a584);
      sub_0801CB20(&DAT_0202b5a0,&DAT_0202a604);
      DAT_0202a574 = 0x10;
      sub_0800F450(0x10,&DAT_0202a5d0);
      sub_080BF0A4(&DAT_020236e0,0x200);
      return in_lr;
    }
LAB_080101f8:
    sub_08014444(&DAT_02022b6c,&DAT_082a0640);
    *(undefined *)(param_1 + 0x175) = 2;
    return in_lr;
  }
  puVar5 = &DAT_082a0608;
LAB_080101ca:
  sub_08014444(&DAT_02022b6c,puVar5);
  *(undefined *)(param_1 + 0x175) = 1;
  return in_lr;
}

