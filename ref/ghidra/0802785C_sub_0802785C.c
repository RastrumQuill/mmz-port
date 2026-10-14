// sub_0802785C at 0x0802785C (thumb)

undefined4 sub_0802785C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  cVar1 = sub_0802810C(param_1,iVar5);
  if (((cVar1 == '\0') && (*(byte *)(iVar5 + 0xd) < 5)) &&
     (sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ac710 + (uint)*(byte *)(param_1 + 0x10) * 4)),
     *(char *)(param_1 + 0xc) == '\x01')) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
    bVar2 = *(byte *)(iVar5 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_0802824C(param_1);
    cVar1 = *(char *)(param_1 + 0x71);
    sub_08025CE8(param_1);
    if ((*(char *)(param_1 + 0xd) != '\x01') &&
       (iVar5 = (int)*(char *)(param_1 + 0x71), iVar5 != cVar1)) {
      piVar4 = (int *)(iVar5 * 4 + *(int *)(param_1 + 0x5c));
      if (*piVar4 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else if (piVar4[-1] == 0) {
        uVar3 = sub_08028574(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,uVar3,param_1 + 0x4c,0);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0x80285ad;
      }
      else {
        uVar3 = sub_08028574(param_1);
        sub_0800561C(param_1 + 0x74,uVar3);
      }
    }
  }
  else {
    if (*(byte *)(param_1 + 0x10) - 0x18 < 2) {
      sub_0802824C(param_1);
    }
    sub_08027E98(param_1);
  }
  return in_lr;
}

