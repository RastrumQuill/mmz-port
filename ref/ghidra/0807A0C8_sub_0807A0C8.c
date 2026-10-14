// sub_0807A0C8 at 0x0807A0C8 (thumb)

undefined4 sub_0807A0C8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    uVar5 = *(undefined4 *)(iVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    bVar2 = *(byte *)(iVar6 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar4 = sub_08048BE8(iVar6);
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xe) = 0;
      if (*(byte *)(iVar6 + 0xd) < 2) {
        uVar1 = *(ushort *)(param_1 + 0x90);
        if ((uVar1 & 1) != 0) {
          if ((uVar1 & 0x1000) == 0) {
            if ((uVar1 & 0x800) == 0) {
              if ((uVar1 & 0x400) == 0) {
                cVar3 = *(char *)(param_1 + 0x11) + '\x01';
              }
              else {
                cVar3 = *(char *)(param_1 + 0x11) + '\x02';
              }
            }
            else {
              cVar3 = *(char *)(param_1 + 0x11) + '\x04';
            }
          }
          else if ((uVar1 & 0x800) == 0) {
            cVar3 = *(char *)(param_1 + 0x11) + '\x03';
          }
          else {
            cVar3 = *(char *)(param_1 + 0x11) + '\x04';
          }
          *(char *)(param_1 + 0x11) = cVar3;
          *(undefined *)(param_1 + 0xe) = 1;
          sub_08001EAC(0x2f);
        }
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1ea0 + (uint)*(byte *)(iVar6 + 0xd) * 4));
    }
    else {
      *(undefined2 *)(param_1 + 0x8c) = 0xff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08079FC0(param_1);
  }
  return in_lr;
}

