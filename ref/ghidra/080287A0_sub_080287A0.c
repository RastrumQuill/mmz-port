// sub_080287A0 at 0x080287A0 (thumb)

undefined4 sub_080287A0(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x20);
  cVar2 = sub_08028FBC(param_1,iVar7);
  if (((cVar2 == '\0') && (*(byte *)(iVar7 + 0xd) < 5)) &&
     (sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acba4 + (uint)*(byte *)(param_1 + 0xd) * 4)),
     *(char *)(param_1 + 0xc) == '\x01')) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
    bVar1 = *(byte *)(iVar7 + 10) >> 4 & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar6 = -1;
      if (bVar1 != 0) {
        iVar6 = 1;
      }
      iVar7 = *(char *)(iVar7 + 0x71) * 4;
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0x4c) + *(short *)(&DAT_082ac7e4 + iVar7) * iVar6;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - (int)*(short *)(&DAT_082ac7e6 + iVar7);
    }
    cVar2 = *(char *)(param_1 + 0x71);
    sub_08025CE8(param_1);
    if ((*(char *)(param_1 + 0xd) != '\x02') &&
       (iVar7 = (int)*(char *)(param_1 + 0x71), iVar7 != cVar2)) {
      piVar5 = (int *)(iVar7 * 4 + *(int *)(param_1 + 0x5c));
      if (*piVar5 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else if (piVar5[-1] == 0) {
        uVar4 = sub_08029314(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,uVar4,param_1 + 0x4c,0);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
      }
      else {
        uVar4 = sub_08029314(param_1);
        sub_0800561C(param_1 + 0x74,uVar4);
      }
    }
  }
  else {
    sub_08028D58(param_1);
  }
  return in_lr;
}

