// sub_080C0018 at 0x080C0018 (thumb)

undefined4 sub_080C0018(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  short sVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_0801CB20(&DAT_0202b5a0,param_1 + 0x6f24);
    DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x3900;
    DAT_02004f3a = 0x206;
    DAT_02004f48 = 0;
    sub_080014E8(&DAT_082f108c,0x4000);
    sub_0800179C(&DAT_082f1098,0);
    FUN_080c88ec(&DAT_082e38c4,(DAT_02004f3a & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_080bbeb8();
    if ((DAT_02022b64 & 0x5c) == 4) {
      DAT_02022b26 = DAT_02022b26 & 0xf | 0x10;
    }
    else {
      DAT_02022b26 = DAT_02022b26 & 0xf;
    }
    if ((DAT_02022b64 & 0x40) != 0) {
      DAT_02022b26 = DAT_02022b26 & 0xf0 | 1;
    }
    cVar1 = sub_0801CE04(param_1 + 0x6f24);
    if (cVar1 != '\0') {
      *(undefined *)(DAT_02022b20 + 4) = 1;
    }
    DAT_02022b30 = (uint)DAT_0202b7a0 + DAT_02022b30;
    sub_0800F4C4();
    sub_08001E34(0x73);
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar5 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar5;
    DAT_03001ba0 = (undefined)sVar5;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar5 < 0x20) goto switchD_080c002c_caseD_5;
    *(undefined *)(param_1 + 3) = 0;
    break;
  case 2:
    if ((DAT_02004ca8 & 0xb) == 0) goto switchD_080c002c_caseD_5;
    sub_08001EAC(0x2a);
    sub_08001E44(0x73);
    *(undefined2 *)(param_1 + 4) = 0x20;
    break;
  case 3:
    sVar5 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar5;
    DAT_03001ba0 = (undefined)sVar5;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar5 != 0) goto switchD_080c002c_caseD_5;
    DAT_02004f30 = DAT_02004f30 & 0xc7ff;
    break;
  case 4:
    iVar2 = sub_08001E7C(0x73);
    if (iVar2 == 0) {
      DAT_03001ba2 = 0x20;
      DAT_03001ba1 = 0x20;
      DAT_03001ba0 = 0x20;
      sub_080C22DC(param_1);
      DAT_02022aec = 0;
      sub_0800F3BC(param_1 + 0x6ea4);
      puVar6 = (uint *)(param_1 + 0x6e94);
      if (*puVar6 == 0x10) {
        sub_080BF0A4(param_1,0x900);
      }
      else {
        if ((DAT_02022add & 0x10) == 0) {
          *puVar6 = DAT_02022add & 0x10;
        }
        else {
          sub_0800F3BC(param_1 + 0x6ea4);
          sub_0801CB20(&DAT_0202b5a0,param_1 + 0x6f24);
          *puVar6 = 0xf;
          sub_0800F450(0xf,param_1 + 0x6ef0);
        }
        sub_080BF0A4(param_1,0x200);
      }
    }
  default:
    goto switchD_080c002c_caseD_5;
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080c002c_caseD_5:
  if ((byte)(*(char *)(param_1 + 2) - 1U) < 3) {
    sub_080BC1C8(DAT_02022b36,0x18,6);
    sub_080BC1C8(DAT_02022b37,0x18,7);
    sub_080BC1C8(DAT_02022b38,0x18,8);
    sub_080BC1C8(DAT_02022b39,0x18,9);
    sub_080BC1C8(DAT_02022b3a,0x18,10);
    sub_080BC1C8((int)DAT_02022b3b,0x18,0xb);
    sub_080BC1C8((int)DAT_02022b25,0x18,0xd);
    sub_080BC174(*(undefined4 *)(&DAT_082cbecc + (uint)(DAT_02022b26 >> 4) * 4),0xe,6);
    uVar3 = sub_080C8C38(DAT_02022b28,0xe10);
    sub_080BC1C8(uVar3,0x11,7);
    sub_080BC174(&DAT_080d1dc0,0x12,7);
    uVar3 = sub_080C8C38(DAT_02022b28,0x3c);
    uVar3 = sub_080C8CB0(uVar3,0x3c);
    sub_080BC1C8(uVar3,0x14,7);
    sub_080BC1C8(DAT_02022b2c,0x14,8);
    sub_080BC1C8(DAT_02022b2e,0x14,9);
    sub_080BC1C8(DAT_02022b34,0x14,10);
    sub_080BC1C8(DAT_02022b35,0x14,0xb);
    sub_080BC174(*(undefined4 *)(&DAT_082cbeb0 + (uint)*(byte *)(DAT_02022b20 + 1) * 4),0x14,0xf);
    if (*(int *)(param_1 + 0x6e94) == 0x10) {
      if ((DAT_02022ad4 & 1) == 0) {
        pcVar4 = *(char **)(&DAT_0829fa28 + (uint)*(byte *)(DAT_02022b20 + 5) * 4);
        uVar3 = 0x11;
      }
      else {
        pcVar4 = "MASTER";
        uVar3 = 0x13;
      }
      sub_080BC174(pcVar4,uVar3,0x10);
    }
    else {
      sub_080BC174(*(undefined4 *)(&DAT_0829fa28 + (uint)*(byte *)(DAT_02022b20 + 2) * 4),0x11,0x10)
      ;
    }
  }
  return in_lr;
}

