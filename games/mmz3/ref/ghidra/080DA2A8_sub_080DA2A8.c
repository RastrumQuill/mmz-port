// sub_080DA2A8 at 0x080DA2A8 (thumb)

undefined4 sub_080DA2A8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = DAT_02002442;
  switch(*(undefined *)(param_1 + 0x10)) {
  case 0xc:
    bVar1 = 0x10;
    break;
  case 0xd:
    bVar1 = 0x80;
    bVar2 = DAT_0200243e;
    break;
  case 0xe:
    bVar1 = 0x40;
    bVar2 = DAT_02002441;
    break;
  case 0xf:
    bVar1 = 0x80;
    bVar2 = DAT_02002441;
    break;
  case 0x10:
    bVar1 = 4;
    break;
  case 0x11:
    bVar1 = 0x10;
    bVar2 = DAT_0200243e;
    break;
  case 0x12:
    bVar1 = 0x40;
    bVar2 = DAT_0200243e;
    break;
  case 0x13:
    bVar1 = 0x40;
    bVar2 = DAT_0200243d;
    break;
  case 0x14:
    bVar1 = 0x20;
    break;
  default:
    goto switchD_080da2be_caseD_9;
  }
  if ((bVar1 & bVar2) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
switchD_080da2be_caseD_9:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836daa4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0xbe) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined2 *)(param_1 + 0xc0) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined2 *)(param_1 + 0xc2) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080D9004(param_1);
  }
  return in_lr;
}

