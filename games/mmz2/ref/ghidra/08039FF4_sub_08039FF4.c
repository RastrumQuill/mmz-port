// sub_08039FF4 at 0x08039FF4 (thumb)

undefined4 sub_08039FF4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(iVar4 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 0x24) == 0) {
    if ((((iVar3 == *(int *)(iVar2 + 0xb4)) && (*(char *)(iVar2 + 0x6a) != '\0')) &&
        (*(byte *)(iVar3 + 0xc) < 2)) &&
       ((*(char *)(iVar3 + 8) == '\x03' && (iVar3 = sub_08007800(param_1,iVar4), iVar3 != 0)))) {
      if (DAT_0202e140 == '\0') {
        DAT_0202e180 = DAT_0202e180 + 4;
      }
      else {
        sub_08022FEC(*(undefined4 *)(iVar2 + 0x28));
      }
      *(char *)(iVar2 + 0x6a) = '\0';
    }
    if ((*(uint *)(param_1 + 0x14) & 0x1000) == 0) {
      return in_lr;
    }
    *(byte *)(iVar2 + 0x67) = *(byte *)(iVar2 + 0x67) | 1;
LAB_0803a11a:
    *(undefined *)(iVar2 + 0x66) = 5;
  }
  else {
    if ((*(uint *)(iVar2 + 0x8c) & 4) != 0) {
      sub_08035720(iVar2,*(undefined4 *)(iVar2 + 0x28),0);
    }
    if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
      *(byte *)(iVar2 + 0x67) = *(byte *)(iVar2 + 0x67) | 1;
      if (*(int *)(iVar2 + 0xb4) != 0) {
        return in_lr;
      }
      *(ushort *)(iVar2 + 0x68) = (ushort)*(byte *)(iVar3 + 0x1c);
      *(int *)(iVar2 + 0xb4) = iVar3;
      cVar1 = sub_0803A130(param_1);
      if (cVar1 == -1) goto LAB_0803a11a;
      *(char *)(iVar2 + 0x66) = cVar1;
    }
    else {
      if ((*(uint *)(iVar4 + 0x18) & 0x200) != 0) {
        return in_lr;
      }
      if (*(int *)(iVar2 + 0xb4) != 0) {
        return in_lr;
      }
      *(ushort *)(iVar2 + 0x68) = (ushort)*(byte *)(iVar3 + 0x1c);
      *(int *)(iVar2 + 0xb4) = iVar3;
      cVar1 = sub_0803A130(param_1);
      *(char *)(iVar2 + 0x66) = cVar1;
      if (cVar1 == -1) {
        return in_lr;
      }
    }
    *(undefined4 *)(iVar2 + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28);
  }
  return in_lr;
}

