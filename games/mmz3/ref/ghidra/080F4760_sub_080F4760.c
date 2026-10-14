// sub_080F4760 at 0x080F4760 (thumb)

undefined4 sub_080F4760(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x64ac);
  uVar7 = 0;
  cVar3 = '\0';
  iVar5 = iVar10 + 0xbc;
  do {
    if (*(char *)(iVar5 + uVar7) != -1) {
      if (cVar3 == *(char *)(param_1 + 0xdcd)) {
        *(char *)(param_1 + 0xe1b) = (char)uVar7;
        break;
      }
      cVar3 = cVar3 + '\x01';
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 4);
  uVar4 = DAT_02002136;
  pcVar6 = (char *)(param_1 + 0xe17);
  switch(*pcVar6) {
  case '\0':
    *(undefined *)(param_1 + 0xe1d) = 1;
    *(undefined4 *)(param_1 + 0xde8) = 0;
    uVar2 = 8;
    goto LAB_080f489e;
  case '\x01':
    *(undefined *)(param_1 + 0xe1d) = 1;
    cVar3 = *(char *)(param_1 + 0xe1a) + -1;
    *(char *)(param_1 + 0xe1a) = cVar3;
    if (cVar3 != -1) break;
    iVar5 = sub_080E5F40(param_1,0,0);
    *(int *)(param_1 + 0xde8) = iVar5;
    *(undefined2 *)(iVar5 + 0x76) = 0x68;
    *(undefined *)(param_1 + 0xdcd) = 0;
    goto LAB_080f48a0;
  case '\x02':
    uVar7 = (uint)DAT_02002134;
    if ((DAT_02002134 & 1) == 0) {
      if ((DAT_02002134 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 0xdcd);
        if ((DAT_02002136 & 0x10) != 0) {
          uVar2 = sub_080FE390(bVar1 + 1,*(undefined *)(param_1 + 0xdda));
          *(undefined *)(param_1 + 0xdcd) = uVar2;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar2 = sub_080FE390((*(byte *)(param_1 + 0xdcd) - 1) + (uint)*(byte *)(param_1 + 0xdda));
          *(undefined *)(param_1 + 0xdcd) = uVar2;
        }
        if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0xdcd)) {
          sub_0800471C(1);
        }
      }
      else {
        sub_0800471C(3);
        *(undefined *)(*(int *)(param_1 + 0xde8) + 0x78) = 1;
        *(uint *)(param_1 + 0xde8) = uVar7 & 1;
        *(undefined *)(param_1 + 0xe1a) = 8;
        *pcVar6 = *pcVar6 + '\x02';
      }
      break;
    }
    uVar4 = sub_08025A04(iVar10);
    if ((uVar4 & 0xff) == *(ushort *)(iVar10 + 0xa4)) {
      sub_0800471C(4);
      return in_lr;
    }
    if (*(char *)((uint)*(byte *)(param_1 + 0xe1b) + iVar5) == '\0') {
      sub_0800471C(4);
      break;
    }
    uVar2 = 0;
LAB_080f489e:
    *(undefined *)(param_1 + 0xe1a) = uVar2;
LAB_080f48a0:
    *pcVar6 = *pcVar6 + '\x01';
    break;
  case '\x03':
    *(undefined *)(param_1 + 0xe1d) = 1;
    pcVar9 = (char *)(param_1 + 0xe1a);
    cVar3 = *pcVar9;
    *pcVar9 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      pcVar8 = (char *)(iVar5 + (uint)*(byte *)(param_1 + 0xe1b));
      cVar3 = *pcVar8;
      if (cVar3 != '\0') {
        *pcVar8 = cVar3 + -1;
        cVar3 = sub_08025978(iVar10);
        if (cVar3 != '\0') {
          *pcVar9 = '\x03';
          break;
        }
      }
      sub_080F5604(iVar10);
      *pcVar6 = '\x02';
    }
    break;
  case '\x04':
    *(undefined *)(param_1 + 0xe1d) = 1;
    cVar3 = *(char *)(param_1 + 0xe1a) + -1;
    *(char *)(param_1 + 0xe1a) = cVar3;
    if (cVar3 == -1) {
      sub_080F5604(iVar10);
      *(undefined *)(param_1 + 3) = 0;
    }
  }
  if (*(int *)(param_1 + 0xde8) != 0) {
    *(ushort *)(*(int *)(param_1 + 0xde8) + 0x74) = (ushort)*(byte *)(param_1 + 0xdcd) * 0x10 + 0x44
    ;
  }
  return in_lr;
}

