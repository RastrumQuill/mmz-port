// sub_08079C7C at 0x08079C7C (thumb)

undefined4 sub_08079C7C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08012580(param_1);
  bVar6 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar6 | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  bVar2 = *(byte *)(param_1 + 0x10);
  if (bVar2 == 1) {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    if (bVar1) {
      bVar6 = bVar6 | 0x13;
    }
    else {
      bVar6 = bVar6 & 0xef | 3;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833ffc4,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    cVar3 = sub_0807A694(param_1);
    if (cVar3 == '\0') goto LAB_08079f60;
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 1;
    uVar7 = 0;
    if (uVar4 != 0xfffffffe) {
      do {
        local_1c = *(undefined4 *)(param_1 + 0x54);
        local_18 = *(int *)(param_1 + 0x58) + 0x1800;
        sub_080B61B4(0,&local_1c,1,0);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < uVar4 + 2);
    }
LAB_08079e7e:
    uVar5 = 0x3701;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*(int *)(param_1 + 0x28) + 0x54);
        if (bVar1) {
          bVar6 = bVar6 | 0x13;
        }
        else {
          bVar6 = bVar6 & 0xef | 3;
        }
        *(byte *)(param_1 + 10) = bVar6;
        *(bool *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08006DE4(param_1 + 0x74,&DAT_0833ffc4,param_1 + 0x54,0x12);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        cVar3 = sub_0807A694(param_1);
        if (cVar3 != '\0') {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          uVar4 = uVar4 * 2 >> 0x11 & 1;
          uVar7 = 0;
          if (uVar4 != 0xfffffffe) {
            do {
              local_1c = *(undefined4 *)(param_1 + 0x54);
              local_18 = *(int *)(param_1 + 0x58) + 0x1800;
              sub_080B61B4(0,&local_1c,1,0);
              uVar7 = uVar7 + 1 & 0xff;
            } while (uVar7 < uVar4 + 2);
          }
          sub_080127E4(param_1,0x3701);
          sub_08012CA4(param_1,7);
        }
      }
      goto LAB_08079f60;
    }
    if (bVar2 != 0) goto LAB_08079f60;
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    if (bVar1) {
      bVar6 = bVar6 | 0x13;
    }
    else {
      bVar6 = bVar6 & 0xef | 3;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833ffc4,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(char *)(param_1 + 0x11) != '\x01') goto LAB_08079f60;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      cVar3 = sub_0807A694(param_1);
      if (cVar3 != '\0') {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        uVar7 = 0;
        if (uVar4 != 0xfffffffe) {
          do {
            local_1c = *(undefined4 *)(param_1 + 0x54);
            local_18 = *(int *)(param_1 + 0x58) + 0x1800;
            sub_080B61B4(0,&local_1c,1,0);
            uVar7 = uVar7 + 1 & 0xff;
          } while (uVar7 < uVar4 + 2);
        }
      }
      goto LAB_08079e7e;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    uVar5 = 0x3700;
  }
  sub_080127E4(param_1,uVar5);
LAB_08079f60:
  sub_080128D4(param_1);
  sub_08079F88(param_1);
  return in_lr;
}

