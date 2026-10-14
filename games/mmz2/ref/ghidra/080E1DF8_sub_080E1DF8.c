// sub_080E1DF8 at 0x080E1DF8 (thumb)

undefined4 sub_080E1DF8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  ushort auStack_64 [10];
  uint local_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  sub_080EF3F0(auStack_64,&DAT_080ff8f0,0x14);
  local_50[0] = 0;
  local_50[1] = 1;
  local_50[2] = 2;
  local_50[3] = 3;
  uStack_40 = 4;
  uStack_3c = 5;
  local_38 = 6;
  uStack_34 = 7;
  uStack_30 = 8;
  local_2c = 9;
  iVar6 = sub_080E3D88(param_1);
  if (iVar6 * 0x10000 < 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    *(undefined2 *)(param_1 + 6) = 0;
    if (*(char *)(param_1 + 0x7251) == '\x01') {
      *(ushort *)(param_1 + 0x7344) = *(ushort *)(param_1 + 0x7344) | 0x100;
      *(undefined *)(param_1 + 0x7340) = 8;
      *(undefined2 *)(param_1 + 6) = 8;
    }
    *(undefined *)(param_1 + 0x7251) = 0;
    sub_080140D0(param_1 + 0x7264);
    sub_08011F94();
    DAT_0202e140 = 1;
    DAT_0202e188 = 0;
    sub_0801E708(&DAT_02037cf0,0,param_1 + 0x7324);
    sub_080D9C38(param_1 + 0x980,&DAT_0203bc40,0x40);
    sub_080033A8(param_1 + 0xdc0,(undefined4 *)(param_1 + 0xdcc),0,0);
    *(undefined4 *)(param_1 + 0xdcc) = 0x7800;
    *(undefined4 *)(param_1 + 0xdd0) = 0x5000;
    sub_08004A08(param_1 + 0xbb4);
    sub_08004A40(param_1 + 0xbb4,param_1 + 0xdc0);
    DAT_02000f98 = 0x406;
    DAT_02000fa4 = 0;
    sub_08002638(&DAT_08390eb4,0x4000);
    sub_08002AEC(&DAT_08390ec0,0);
    sub_080EEF68(&DAT_083873c0,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_08002638(&DAT_08433214,(DAT_0202e612 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433220,(DAT_0202e412 - 9) * 0x20 + 0x200);
    sub_08002638(&DAT_0843323c,(DAT_0202e616 - 0x280) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433248,(DAT_0202e416 - 8) * 0x20 + 0x200);
    sub_08002638(&DAT_0843328c,(DAT_0202e61e - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433298,(DAT_0202e41e - 4) * 0x20 + 0x200);
    sub_08002638(&DAT_084332a0,(DAT_0202e620 - 0x270) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332ac,(DAT_0202e420 - 7) * 0x20 + 0x200);
    uVar8 = 0;
    iVar6 = param_1 + 6;
    do {
      if (((int)(uint)*(ushort *)(param_1 + 0x7344) >> (local_50[(short)uVar8] & 0xff) & 1U) != 0) {
        sub_080DBCF0(&DAT_02037cf0,uVar8 & 0xff);
      }
      uVar7 = (int)(short)uVar8 + 1;
      uVar8 = uVar7 & 0xffff;
    } while ((int)(uVar7 * 0x10000) >> 0x10 < 10);
    sub_080DC11C(iVar6);
    sub_080DC298(0,iVar6);
    sub_080DC298(1,iVar6);
    sub_080DC298(2,iVar6);
    *(undefined **)(param_1 + 0x2050) = &DAT_02037cf0;
    *(undefined *)(param_1 + 0x2054) = 8;
    *(undefined *)(param_1 + 0x2056) = 0;
    *(undefined *)(param_1 + 0x2055) = 0;
    *(undefined *)(param_1 + 0x2057) = 0;
    *(undefined *)(param_1 + 0x2058) = 0;
    *(undefined *)(param_1 + 0x2059) = 0;
    sub_080DDFC4();
    *(undefined2 *)(param_1 + 0x735c) = *(undefined2 *)(param_1 + 0x735a);
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    iVar6 = *(ushort *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = (short)iVar6;
    DAT_03002ec0 = (undefined)iVar6;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (iVar6 * 0x10000 >> 0x10 == 0x20) {
      *(undefined2 *)(param_1 + 4) = 0;
      sub_08002D68(0x99,0);
LAB_080e2494:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 2:
    sVar5 = *(short *)(param_1 + 6);
    if ((DAT_02000d16 & 0x40) != 0) {
      sub_080032EC(1);
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 0x14;
    }
    if ((DAT_02000d16 & 0x80) != 0) {
      sub_080032EC(1);
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 5;
    }
    if (((DAT_02000d16 & 0x20) != 0) && (*(short *)(param_1 + 6) < 10)) {
      sub_080032EC(1);
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 0x18;
    }
    if (((DAT_02000d16 & 0x10) != 0) && (*(short *)(param_1 + 6) < 10)) {
      sub_080032EC(1);
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    sVar4 = sub_080EF1E8((int)*(short *)(param_1 + 6),0x19);
    *(short *)(param_1 + 6) = sVar4;
    if ((9 < sVar5) && (sVar4 < 10)) {
      sub_08002D68(0x99,0);
    }
    if ((DAT_02000d16 & 1) != 0) {
      if (*(short *)(param_1 + 6) < 10) {
        if (((int)(uint)*(ushort *)(param_1 + 0x7344) >> (local_50[*(short *)(param_1 + 6)] & 0xff)
            & 1U) == 0) {
          sub_080032EC(4);
        }
        else {
          sub_080032EC(2);
          *(char *)(param_1 + 0x7340) = (char)local_50[*(short *)(param_1 + 6)];
          DAT_02037eec = (undefined)local_50[*(short *)(param_1 + 6)];
        }
      }
      else {
        sub_080032EC(4);
      }
    }
    if ((DAT_02000d16 & 8) != 0) {
      sub_080032EC(2);
      *(undefined2 *)(param_1 + 4) = 0x20;
      *(undefined *)(param_1 + 3) = 0;
      cVar2 = '\x06';
LAB_080e2468:
      *(char *)(param_1 + 2) = cVar2;
      break;
    }
    if ((DAT_02000d16 & 2) != 0) {
      sub_080032EC(3);
      *(undefined2 *)(param_1 + 4) = 0x20;
      *(undefined *)(param_1 + 3) = 1;
      cVar2 = '\x06';
      goto LAB_080e2468;
    }
    if (9 < *(short *)(param_1 + 6)) {
      if ((DAT_02000d16 & 1) != 0) {
        sVar5 = sub_080EF150((int)*(short *)(param_1 + 6),5);
        if ((sVar5 != 4) || (bVar1 = sub_08037C5C(&DAT_02037cf0), 1 < bVar1)) {
          sub_080032EC(2);
          *(undefined *)(param_1 + 0x2056) = 1;
          cVar2 = sub_080EF150((int)*(short *)(param_1 + 6),5);
          *(char *)(param_1 + 0x2057) = cVar2 + -2;
          *(undefined *)(param_1 + 0x2058) = 0;
          *(undefined *)(param_1 + 0x2054) = 8;
          *(undefined *)(param_1 + 0x2059) = 1;
          cVar2 = sub_080EF150((int)*(short *)(param_1 + 6),5);
          sub_080DE128(param_1 + 0x2050,cVar2 + -2);
          goto LAB_080e2464;
        }
        sub_080032EC(4);
      }
      break;
    }
    goto LAB_080e253c;
  case 3:
    cVar2 = *(char *)(param_1 + 0x2054) + -1;
    *(char *)(param_1 + 0x2054) = cVar2;
    if (cVar2 != '\0') break;
    *(undefined *)(param_1 + 0x2055) = 0;
    uVar3 = 2;
LAB_080e2492:
    *(undefined *)(param_1 + 0x2059) = uVar3;
    goto LAB_080e2494;
  case 4:
    if ((DAT_02000d16 & 0x20) != 0) {
      sub_080032EC(1);
      if (*(char *)(param_1 + 0x2057) == '\x02') {
        cVar2 = sub_08037C5C(&DAT_02037cf0);
        *(char *)(param_1 + 0x2058) = cVar2 + *(char *)(param_1 + 0x2058) + -1;
        uVar3 = sub_08037C5C(&DAT_02037cf0);
      }
      else {
        cVar2 = sub_08037C20(&DAT_02037cf0);
        *(char *)(param_1 + 0x2058) = cVar2 + *(char *)(param_1 + 0x2058) + -1;
        uVar3 = sub_08037C20(&DAT_02037cf0);
      }
      uVar3 = sub_080EF330(*(undefined *)(param_1 + 0x2058),uVar3);
      *(undefined *)(param_1 + 0x2058) = uVar3;
    }
    if ((DAT_02000d16 & 0x10) != 0) {
      sub_080032EC(1);
      if (*(char *)(param_1 + 0x2057) == '\x02') {
        *(char *)(param_1 + 0x2058) = *(char *)(param_1 + 0x2058) + '\x01';
        uVar3 = sub_08037C5C(&DAT_02037cf0);
      }
      else {
        *(char *)(param_1 + 0x2058) = *(char *)(param_1 + 0x2058) + '\x01';
        uVar3 = sub_08037C20(&DAT_02037cf0);
      }
      uVar3 = sub_080EF330(*(undefined *)(param_1 + 0x2058),uVar3);
      *(undefined *)(param_1 + 0x2058) = uVar3;
    }
    if ((DAT_02000d16 & 1) != 0) {
      sub_080032EC(2);
      cVar2 = *(char *)(param_1 + 0x2057);
      if (cVar2 == '\x02') {
        DAT_02037f05 = sub_08037C84(&DAT_02037cf0,*(byte *)(param_1 + 0x2058) + 1);
      }
      else {
        if (*(char *)(param_1 + 0x2058) == (&DAT_02037f02)[cVar2 == '\0']) {
          (&DAT_02037f02)[cVar2 == '\0'] = (&DAT_02037f02)[*(byte *)(param_1 + 0x2057)];
        }
        (&DAT_02037f02)[*(byte *)(param_1 + 0x2057)] = *(undefined *)(param_1 + 0x2058);
      }
      *(undefined *)(param_1 + 0x2054) = 8;
      *(undefined *)(param_1 + 0x2059) = 3;
LAB_080e2464:
      cVar2 = *(char *)(param_1 + 2) + '\x01';
      goto LAB_080e2468;
    }
    if ((DAT_02000d16 & 2) != 0) {
      sub_080032EC(3);
      *(undefined *)(param_1 + 0x2054) = 8;
      uVar3 = 3;
      goto LAB_080e2492;
    }
    break;
  case 5:
    cVar2 = *(char *)(param_1 + 0x2054) + -1;
    *(char *)(param_1 + 0x2054) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x7356) = DAT_02037f02;
      *(undefined *)(param_1 + 0x7357) = DAT_02037f03;
      *(undefined *)(param_1 + 0x7359) = DAT_02037f05;
      *(undefined *)(param_1 + 0x2055) = 0;
      *(undefined *)(param_1 + 0x2056) = 0;
      *(undefined *)(param_1 + 2) = 2;
    }
    break;
  case 6:
    sVar5 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar5;
    DAT_03002ec0 = (undefined)sVar5;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar5 == 0) {
      sub_08002EF0(0x99);
      if (*(char *)(param_1 + 3) == '\0') {
        sub_080E0E64(param_1,0x804);
      }
      else {
        sub_080E0E64(param_1,0x100604);
      }
    }
  }
  if (*(short *)(param_1 + 6) < 10) {
LAB_080e253c:
    sub_08002EA0(0x99);
    if (((int)(uint)*(ushort *)(param_1 + 0x7344) >> (local_50[*(short *)(param_1 + 6)] & 0xff) & 1U
        ) != 0) {
      sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[auStack_64[*(short *)(param_1 + 6)]],0x13
                   ,2);
    }
  }
  else {
    sub_08002EF0(0x99);
    sub_08002D68(0x99,0);
    sub_08002EF0(0x99);
  }
  param_1 = param_1 + 0xbb4;
  sub_08004AF4(param_1);
  DAT_0202e148 = 0;
  local_28[0] = 0;
  sub_080EEF68(local_28,&DAT_0202e160,0x1000008);
  sub_08012004(DAT_0202f094);
  sub_0801218C(DAT_0202f094,param_1);
  sub_08004AA4(param_1);
  return in_lr;
}

