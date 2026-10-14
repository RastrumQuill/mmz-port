// sub_0800DBAC at 0x0800DBAC (thumb)

undefined4 sub_0800DBAC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08005410();
LAB_0800dc34:
  do {
    while( true ) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
        *(int *)(param_1 + 0xc) = iVar3;
        if (iVar3 == param_1 + 0x14) {
          return in_lr;
        }
        sub_080C8A98(iVar3,*(undefined4 *)(iVar3 + 0x14));
        bVar1 = *(byte *)(iVar3 + 0xb);
      } while ((bVar1 & 8) == 0);
      if ((bVar1 & 0x10) == 0) break;
      uVar4 = *(undefined4 *)(iVar3 + 0x28);
      uVar2 = 0x41;
LAB_0800dc04:
      sub_08008FD0(uVar2,iVar3 + 0x4c,uVar4,0);
    }
    if ((bVar1 & 0x20) != 0) {
      if ((bVar1 & 0x40) == 0) {
        uVar4 = *(undefined4 *)(iVar3 + 0x28);
        uVar2 = 0x81;
        goto LAB_0800dc04;
      }
      sub_08008FD0(0x91,iVar3 + 0x4c,*(undefined4 *)(iVar3 + 0x28),iVar3 + 0x54);
      goto LAB_0800dc34;
    }
    if ((bVar1 & 0x40) == 0) {
      sub_08008FD0(1,iVar3 + 0x4c,*(undefined4 *)(iVar3 + 0x28),0);
    }
    else {
      sub_08008FD0(0x11,iVar3 + 0x4c,*(undefined4 *)(iVar3 + 0x28),iVar3 + 0x54);
    }
  } while( true );
}

