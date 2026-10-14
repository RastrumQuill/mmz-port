// sub_080870C8 at 0x080870C8 (thumb)

undefined4 sub_080870C8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    break;
  case 2:
    goto switchD_080870dc_caseD_2;
  case 3:
    sub_080127E4(param_1,0xac08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_08012A14(param_1);
    if ((*(uint *)(iVar4 + 0xb4) & 0x100) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0808718c;
  default:
    return in_lr;
  }
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834158e + (uint)*(byte *)(param_1 + 0x12) * 2));
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080870dc_caseD_2:
  sub_08012A14(param_1);
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((byte)(&DAT_08341594)[*(byte *)(param_1 + 0x12)] <= bVar1) {
      uVar3 = *(byte *)(param_1 + 0x12) + 1;
      *(char *)(param_1 + 0x12) = (char)uVar3;
      if ((uVar3 & 0xff) < 3) {
LAB_0808718c:
        cVar2 = '\x01';
      }
      else {
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      }
      *(char *)(param_1 + 0xe) = cVar2;
    }
  }
  return in_lr;
}

