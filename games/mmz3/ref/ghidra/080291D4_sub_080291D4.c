// sub_080291D4 at 0x080291D4 (thumb)

undefined4 sub_080291D4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835ab9c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b064,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8029c79;
  sub_08032FF4(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xe9) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0xec) = 0;
  *(undefined *)(param_1 + 0xf0) = 0;
  *(undefined *)(param_1 + 0xed) = 0;
  *(undefined *)(param_1 + 0xf1) = 0;
  *(undefined *)(param_1 + 0xee) = 0;
  *(undefined *)(param_1 + 0xf2) = 0;
  *(undefined *)(param_1 + 0xef) = 0;
  *(undefined *)(param_1 + 0xf3) = 0;
  *(undefined2 *)(param_1 + 0xfa) = 0xffff;
  *(undefined *)(param_1 + 0xe4) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xe5) = *(undefined *)(param_1 + 0xc1);
  puVar5 = (undefined2 *)(param_1 + 0x16c);
  pbVar4 = (byte *)(param_1 + 0xe0);
  if (*(char *)(param_1 + 0xc0) == *(char *)(param_1 + 0xc1)) {
    *(undefined *)(param_1 + 0xb4) = 0xff;
    *(undefined *)(param_1 + 0xb5) = 0xff;
    uVar7 = 0;
    do {
      uVar6 = 1 << (uVar7 & 0xff);
      if (((int)(*(ushort *)(param_1 + 200) & uVar6) >> (uVar7 & 0xff) != 0) &&
         ((int)(*(ushort *)(param_1 + 0xc6) & uVar6) >> (uVar7 & 0xff) != 0)) {
        *(ushort *)(param_1 + 0xc6) = *(ushort *)(param_1 + 0xc6) ^ (ushort)uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xc);
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined *)(param_1 + 0x113) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined *)(param_1 + 0x119) = 0;
  *(undefined *)(param_1 + 0x11a) = 0;
  *(undefined *)(param_1 + 0x11b) = 0;
  *(undefined *)(param_1 + 0x11c) = 0;
  *(undefined *)(param_1 + 0x11d) = 0;
  *(undefined *)(param_1 + 0x11e) = 0;
  *(undefined *)(param_1 + 0x121) = 0xff;
  *(undefined *)(param_1 + 0x122) = 0;
  sub_08034148(param_1);
  uVar7 = 0;
  do {
    *puVar5 = 0xffff;
    puVar5 = puVar5 + 1;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  *(undefined *)(param_1 + 0x18d) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined *)(param_1 + 0x230) = 0;
  if ((DAT_02030104 & 0x10) == 0) {
    *(byte *)(param_1 + 0x231) = DAT_02030104 & 0x10;
  }
  else {
    *(byte *)(param_1 + 0x231) = 1;
  }
  *(undefined *)(param_1 + 0x232) = 0;
  *(undefined *)(param_1 + 0x233) = 0;
  *(undefined *)(param_1 + 0x234) = 0;
  *(undefined *)(param_1 + 0x149) = 0;
  if (*pbVar4 != 0) {
    bVar1 = sub_08025A04(param_1);
    if (*pbVar4 <= bVar1) goto LAB_0802945e;
  }
  bVar1 = sub_08025A04(param_1);
  *pbVar4 = bVar1;
LAB_0802945e:
  *(ushort *)(param_1 + 0xa4) = (ushort)*pbVar4;
  uVar3 = sub_080B2DA0(param_1,0,0);
  sub_080B2DA0(param_1,uVar3,1);
  sub_080E1274(param_1,*(undefined *)(param_1 + 0xb4),0);
  sub_080E1274(param_1,*(undefined *)(param_1 + 0xb5),1);
  uVar2 = sub_08032F3C(param_1);
  sub_080258F0(param_1,uVar2);
  sub_08025324(*(undefined *)(param_1 + 0xc2));
  sub_080294BC(param_1);
  return in_lr;
}

