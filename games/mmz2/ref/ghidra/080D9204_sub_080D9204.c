// sub_080D9204 at 0x080D9204 (thumb)

undefined4 sub_080D9204(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar2 = *(ushort *)(param_1 + 0xc6) - 1;
  *(ushort *)(param_1 + 0xc6) = (ushort)iVar2;
  iVar6 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar3 = sub_080D635C(param_1,*(int *)(param_1 + 200),(int *)(param_1 + 0xb4),&local_28,0);
  iVar4 = *(int *)(param_1 + 200);
  if (iVar3 == iVar4) {
    *(int *)(param_1 + 0xb4) = local_28;
    *(int *)(param_1 + 0xb8) = local_24;
    *(int *)(param_1 + 0x54) = local_28;
    *(int *)(param_1 + 0x58) = local_24;
    iVar6 = local_28 - iVar6;
    iVar5 = local_24 - iVar5;
    uVar1 = sub_08038E6C(iVar6,iVar5);
    *(undefined *)(param_1 + 0xc4) = uVar1;
    iVar4 = sub_080EEF7C(iVar5 * iVar5 * iVar6 * iVar6);
    *(uint *)(param_1 + 0x5c) = (uint)(iVar4 << 0x10) >> 0x18;
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xe) == '\x02') {
        *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0x7f;
      }
      sub_080D93AC(param_1);
    }
  }
  else {
    if ((iVar4 != 0) && (*(char *)(param_1 + 0xe) == '\x02')) {
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0x7f;
    }
    sub_080D93AC(param_1);
    sub_080D8ED8(param_1);
  }
  return in_lr;
}

