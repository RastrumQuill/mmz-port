// sub_0809A638 at 0x0809A638 (thumb)

undefined4 sub_0809A638(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(byte *)(iVar5 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar1 = *(byte *)(iVar5 + 10) >> 4;
      uVar4 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      uVar3 = *(undefined4 *)(iVar5 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0x12) = 0x40;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      bVar1 = *(byte *)(iVar5 + 10) >> 4;
      uVar4 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      uVar3 = *(undefined4 *)(iVar5 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        sub_08099C0C(iVar5,5,0);
        sub_08099C0C(iVar5,5,1);
        sub_08099C0C(iVar5,5,2);
        sub_08099C0C(iVar5,5,3);
        sub_08099C0C(iVar5,5,4);
        sub_08099C0C(iVar5,5,5);
        sub_08099C0C(iVar5,5,6);
        sub_08099C0C(iVar5,5,7);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_08099CF4(param_1);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

