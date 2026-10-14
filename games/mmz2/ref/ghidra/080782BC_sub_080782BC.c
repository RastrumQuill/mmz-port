// sub_080782BC at 0x080782BC (thumb)

undefined4 sub_080782BC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar5 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080126A0(param_1);
  sub_080127D0(param_1);
  *(undefined *)(param_1 + 0x25) = 8;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xbd) = 8;
  *(undefined *)(param_1 + 0xbf) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080127E4(param_1,0xa60c);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x800;
    *(undefined *)(param_1 + 0xbe) = 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    iVar6 = param_1 + 0x54;
    sub_08006DE4(param_1 + 0x74,&DAT_0833fe30,iVar6,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = '\x06';
    do {
      if (cVar2 == '\x06') {
        uVar4 = sub_08078018(param_1,iVar6,2,6);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
      else {
        sub_08078018(param_1,iVar6,2,cVar2);
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080127E4(param_1,0xa61d);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x800;
    *(undefined *)(param_1 + 0xbe) = 0x30;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    iVar6 = param_1 + 0x54;
    sub_08006DE4(param_1 + 0x74,&DAT_0833fe48,iVar6,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = '\x06';
    do {
      if (cVar2 == '\x06') {
        uVar4 = sub_08078018(param_1,iVar6,3,6);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
      else {
        sub_08078018(param_1,iVar6,3,cVar2);
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
  return in_lr;
}

